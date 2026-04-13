/*baekjoon 2745.c*/
#include <stdio.h>
#include <string.h>

#define STRLEN 100

int main(){
    char n[STRLEN];
    int b;

    //1. B진법 수 N 입력
    if(scanf("%s %d", n, &b)!=2){
        return 0;
    }
   
    //2. 10진법으로 변환
    long long results=0;
    long long exp=1;
    int len=strlen(n);

    for(int i=0;i<len;i++){
        int value;
        char c=n[len-1-i];//뒤에서부터

        if(c>='0'&&c<='9'){
            value=c-'0';
        }
        else{
            value=c-'A'+10;
        }

        //2-1. 현재 자릿수의 값(value*b^i)을 먼저 더함
        results+=(long long)value*exp;
        //2-2. 다음 자릿수를 위해 exp에 b를 곱해줌
        exp=exp*b;
    }
    //3. 결과 출력
    printf("%lld\n", results);

    return 0;
}

