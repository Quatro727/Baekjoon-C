/*baekjon 2743번*/
#include <stdio.h>
#include <string.h>

#define STRLEN 101

int main(){
    char S[STRLEN];
    int i;

    fgets(S, STRLEN, stdin);
    //scanf("%s", S);
    //->scanf()의 경우 버퍼에 남아 있는 공백이나 개행 문자를 만나면 여기서 끝나는 구나 인식하고
    //그 직전까지만 읽고 배열에 저장 그리고 버퍼에는 공백이나 개행 문자가 남아있게 된다.
    //fgets()의 경우 버퍼에 남아 있는 공백이나 개행 문자를 그냥 빼먹지 않고 다 읽어서 통째로 저장
    printf("%d", strlen(S));//개행 문자까지 읽으므로 -1 해줘야 함
}
