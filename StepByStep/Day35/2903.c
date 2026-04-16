/*baekjoon 2903.c*/
#include <stdio.h>

int main(){
    int n;
    int one_side;
    
    scanf("%d", &n);
    
    //1. 한 변의 점의 개수 구하기
    int squ_num=1;
    for(int i=0;i<n;i++){
        if(i==0) continue;
        squ_num=squ_num*2;
    }
    //printf("%d\n\n", squ_num);

    one_side=squ_num+(squ_num+1);

    //printf("%d\n\n", one_side);

    //2. 저장해야 할 총 점의 개수
    printf("%lld\n", one_side*one_side);
    
    return 0;
}

