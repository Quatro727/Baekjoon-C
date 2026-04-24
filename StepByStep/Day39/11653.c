/*baekjoon 11653.c*/
#include <stdio.h>
#include <stdlib.h>

void get_prime(int, int*);

int main(){
    int n;
    scanf("%d", &n);

    if(n==1) return 0;

    //2부터 시작해서 n을 나눌 수 있는 데까지 나눔
    //i*i<=n조건은 효율성을 위한 기법
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            printf("%d\n", i);
            n=n/i;
        }
    }

    //위 반복문을 마치고 n이 1보다 크면
    //남은 n은 소수라는 의미->그대로 출력
    if(n>1){
        printf("%d\n", n);
    }

    return 0;
}

