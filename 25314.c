#include <stdio.h>

int main(){
    //정수 n
    int n;
    scanf("%d", &n);
    
    //입력된 n으로 ~~int 문자열 만들기
    for(int i=1;i<n/4;i++){
        printf("long ");
    }
    printf("long int\n");
    return 0;
}