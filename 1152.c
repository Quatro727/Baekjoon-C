#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRLEN 1000001

int main(){
    char* str;
    str=(char*)malloc(STRLEN*sizeof(char));
    if(str==NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    fgets(str, STRLEN, stdin);
    //개행 문자 제거
    int k=0;
    while(*(str+k)!='\0'){
        if(*(str+k)=='\n'){
            *(str+k)='\0';
            break;
        }
        k++;
    }
    //단어 카운트 시작
    int cnt=0;
    for(int i=0;*(str+i)!='\0';i++){
        if(*(str+i)==' '){
            cnt++;
        }
    }
    int result=cnt+1;

    //앞이 공백으로 시작하면
    if(str[0]==' '){
        result--;
    }
    //end가 공백으로 끝나면
    int len=strlen(str);
    if(str[len-1]==' '){
        result--;
    }
    //아예 공백 하나만 입력한 경우
    if(str[0]== ' '&&strlen(str)==1 ){
        result=0;
    }
    printf("%d\n", result);
    
    free(str);
    str=NULL;
    
    return 0;
}