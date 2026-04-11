/*baekjoon 10798.c*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define STRLEN 17//널 문자(\0)와 개행문자(\n)를 고려

int main(){
    //1. 문자열 5줄 입력
    char* str[5];//각 줄의 주소값을 위한 포인터 배열
    
    for(int i=0;i<5;i++){
        str[i]=(char*)calloc(sizeof(char),STRLEN);
        if(str[i]!=NULL){
            fgets(str[i], STRLEN, stdin);
            str[i][strlen(str[i])-1]='\0';//개행문자 제거
        }
    }

    //2. 세로로 읽기 수행
    for(int i=0;i<15;i++){
        for(int j=0;j<5;j++){
            //널문자가 아닌 경우에만 출력 진행
            if(str[j][i]!='\0'){
                printf("%c", str[j][i]);
            }
        }
    }
    
    //3. 메모리 해제
    for(int i=0;i<5;i++){
        free(str[i]);
        str[i]=NULL;
    }
    return 0;
}