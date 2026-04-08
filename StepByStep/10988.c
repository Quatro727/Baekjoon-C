/*baekjoon 10988.c*/
#include <stdio.h>
#include <string.h>

#define STRLEN 101

int main(){
    char str[STRLEN];
    int i=0;
    //1. fgets로 문자열 입력받기
    fgets(str, STRLEN, stdin);
    //2. fgets로 입력받은 문자열에서 개행문자 제거
    while(*(str+i)!='\0'){
        if(*(str+i)=='\n'){
            *(str+i)='\0';
            break;
        }
        i++;
    }
    //3. 문자열의 길이를 구한 후 팰린드롬 여부 검시
    int len=strlen(str);

    for(i=0;i<len/2;i++){
        if(str[i]!=str[len-1-i]){
            printf("0\n");
            return 0;
        }
    }
    printf("1\n");

    return 0;
}