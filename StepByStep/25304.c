#include <stdio.h>

int main(){
    long long total;
    int n;
    
    //영수증에 적힌 총 금액 X와 물건 종류의 수 n
    scanf("%lld", &total);
    scanf("%d", &n);
    
    //각 물건의 가격 a와 개수 b
    for(int i=0;i<n;i++){
        int a,b;
        scanf("%d %d", &a, &b);
        total-=a*b;
    }
    
    //영수증 점검
    if(total==0)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}