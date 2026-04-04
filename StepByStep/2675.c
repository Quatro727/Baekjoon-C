/*bakejoon 2675.c*/
#include <stdio.h>
#include <string.h>

int main(){
    //
    int t, r;//테스트 케이스의 개수 t, 반복 횟수 r
    char s[21];//문자열 s

    scanf("%d", &t);

    for(int i=0;i<t;i++){
        scanf("%d %s", &r, s);
        //문자열 s의 각 문자를 r번 반복하여 출력
        for(int j=0;j<strlen(s);j++){
            for(int k=0;k<r;k++){
                printf("%c", s[j]);
            }
        }
        printf("\n");
    }
    return 0;
}