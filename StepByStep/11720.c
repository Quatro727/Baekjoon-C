/*baekjoon 11720.c*/*
#include <stdio.h>

int main(){
    int n;
    int sum=0;
    char str[101];
    
    scanf("%d", &n);
    scanf("%s", str);

    for(int i=0;i<n;i++){
        sum+=str[i]-'0';
    }
    printf("%d\n", sum);
    return 0;
}