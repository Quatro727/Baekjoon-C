/*baekjoon 27866번*/
#include <stdio.h>

int main(){
    char S[1001];
    int i;

    fgets(S, 1000, stdin);
    scanf("%d", &i);
    printf("%c", S[i-1]);

    return 0;
}