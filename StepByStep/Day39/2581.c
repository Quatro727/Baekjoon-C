/*baekjoon 2581.c*/
#include <stdio.h>

int isPrime(int);
long long prime_total(int, int);
int min_prime(int m, int n);

int main(){
    //1. 자연수 m, n 입력
    int m,n;
    scanf("%d", &m);
    scanf("%d", &n);
    
    //2. 소수의 최솟값 min과 소수들의 합 total
    int min;
    long long total;

    min=min_prime(m,n);
    total=prime_total(m,n);
    
    //3. 소수가 없을 경우 -1 출력
    if(total==0){
        printf("%d\n", -1);
    }
    //4. 소수가 있을 경우 min과 total값 출력
    else{
        printf("%lld\n", total);
        printf("%d\n", min);
    }
    return 0;
}
//소수의 최솟값 구하는 함수
int min_prime(int m, int n){
    for(int i=m;i <= n;i++){
        if(isPrime(i)==1) return i;//가장 먼저 발견되는 소수가 min값
    }
    return -1;
}
//소수들의 합을 구하는 함수
long long prime_total(int m, int n){
    long long total=0;

    for(int i=m;i <= n; i++){
        if(isPrime(i)==1){
            total+=i;
        }
    }
    return total;
}
//소수 판별함수
int isPrime(int n){
    if(n<2) return -1;

    for(int i=2; i * i <= n; i++){
        if((n%i)==0) return -1;
    }
    return 1;
}
