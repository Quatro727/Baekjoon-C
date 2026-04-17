/*baekjoon 1193.c*/
#include <stdio.h>

int main(){
    int num;
    int cnt=0;
    int n=0;

    //1. 수 X 입력
    scanf("%d", &num);

    //2. 수 X가 속한 대각선 파악
    while(cnt<num){
        n++;
        cnt+=n;
    }

    printf("cnt:%d, n: %d\n",cnt, n); 
    //3. 대각선에서의 위치 파악
    int order;
    
    order=cnt-num;
    
    printf("%d\n", order);
    if((n%2)==1){
        printf("%d/%d\n",order+1, n-order);
    }
    else{
        printf("%d/%d\n",n-order, 1+order);
    }

    return 0;
}




