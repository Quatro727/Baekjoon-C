/*baekjoon 11718.c*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LINES 100
#define STRLEN 101

int main(){
    char* lines[MAX_LINES];
    int cnt=0;
    char buffer[STRLEN];

    while(cnt<MAX_LINES&&fgets(buffer, STRLEN, stdin)!=NULL){

        //1. 입력한 문자열 길이만큼 동적할당:'\0'까지 포함해서 +1
        lines[cnt]=(char*)malloc((strlen(buffer)+1)*sizeof(char));

        //2. 메모리 할당 성공 여부 확인
        if(lines[cnt]==NULL)break;

        //3. 입력한 문자열 복사
        strcpy(lines[cnt], buffer);

        cnt++;
    }
    for(int i=0;i<cnt;i++){
        fputs(lines[i], stdout);
        free(lines[i]);
        lines[i]=NULL;
    }
    return 0;
}