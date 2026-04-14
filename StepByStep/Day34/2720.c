/*baekjoon 2720.c*/
#include <stdio.h>
#include <stdlib.h>

void get_change(int, int*, int*, int*, int*);
int main(){
    int num;

    //1. 테스트 케이스 개수 입력
    if(scanf("%d", &num)!=1) return 0;

    //2. 테스트 케이스 입력 및 결과 출력
    for(int i=0;i<num;i++){
        int money;
        int q,d,n,p;

        scanf("%d", &money);

        get_change(money, &q, &d, &n, &p);

        printf("%d %d %d %d\n", q,d,n,p);
    }
    return 0;
}
//거스름돈 계산하는 함수
void get_change(int money, int* q, int* d, int* n, int* p){
    int remain=0;
    //1. 25센트개수
    remain=money%25;
    *q=money/25;
    //2.10센트 개수
    *d=remain/10;
    remain=remain%10;
    //3. 5센트 개수
    *n=remain/5;
    remain=remain%5;
    //4. 1센트 개수
    *p=remain/1;
}
