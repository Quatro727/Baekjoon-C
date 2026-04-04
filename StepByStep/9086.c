/*baekjoon 9086.c*/
#include <stdio.h>

#define STRLEN 101
int main(){
    int t;
    scanf("%d", &t);
    
    for(int i=0;i<t;i++){
        char str[STRLEN];
        scanf("%s", str);
        printf("%c%c\n", str[0], str[strlen(str)-1]);
    }
    return 0;
}