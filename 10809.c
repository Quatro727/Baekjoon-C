/*baekjoon 10809.c*/
#include <stdio.h>
#include <string.h>//strlen()

int main(){
    char str[101];

    scanf("%s", str);

    for(int i=0;i<26;i++){
        char c='a'+i;
        int index=-1;
        //입력받은 문자열의 길이만큼 탐색 시작
        for(int j=0;j<strlen(str);j++){
            //해당 문자열의 위치를 발견하는 즉시 for문 탈출
            if(str[j]==c){
                index=j;
                break;
            }
        }
        printf("%d ", index);
    }
    return 0;
}