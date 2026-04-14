/*baekjoon 11005.c*/
#include <stdio.h>
#include <string.h>

#define LENGTH 100

int main(){
    long long n;
    int b;
    char format[LENGTH];

    //1. 10진법 N과 진법 단위 B 입력
    if(scanf("%lld %d", &n, &b)!=2) return 0;

    //2. 진법 변환
    long long temp=n;
    int i=0;
    while(temp>0){
        int remain=0;

        remain=temp%b;
        temp=temp/b;
        //2-1. 나머지 값 분류 및 진법 배열에 저장
        if(remain>=0&&remain<10){
            format[i]=remain+'0';
        }
        else{
            format[i]=remain-10+'A';
        }
        i++;
    }

    //3. 변환한 값 출력
    for(int j=i-1;j>=0;j--){
        printf("%c", format[j]);
    }
    printf("\n");
        
    return 0;
}
