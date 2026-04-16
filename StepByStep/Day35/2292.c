/*baekjoon 2292.c*/
#include <stdio.h>

int main(){
    long long num;
    
    //1. 방 번호 입력
    scanf("%lld", &num);
    
    //2. 해당 방 번호가 속한 그룹의 MAX 값을 기준으로 거리 계산
    int MAX=1;
    int cnt=1;
    while(num>MAX){
        MAX=MAX+6*cnt;
        cnt+=1;
    }

    printf("%d\n", cnt);

    return 0;
}
