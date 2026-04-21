/*baekjoon 1978.c*/
#include <stdio.h>
#include <stdlib.h>

int count_prime(int*, int);
int isPrime(int);

int main(){
    int case_num;
    //1. 입력할 숫자의 개수 입력
    scanf("%d", &case_num);
    
    //2. 입력값을 저장하기 위해 메모리 할당
    int* ptr=(int*)calloc(case_num, sizeof(int));
    
    //3. 숫자 입력
    for(int i=0;i<case_num;i++){
        scanf("%d", ptr+i);
    }
    
    //4. 입력한 숫자들에서 소수의 개수 구하기
    int result;
    result=count_prime(ptr, case_num);
    
    //5. 결과 출력
    printf("%d\n", result);
    
    //6. 메모리 해제
    free(ptr);
    ptr=NULL;

    return 0;
}
//소수의 개수를 구하는 함수
int count_prime(int* ptr, int num){
    int cnt=0;
    
    for(int i=0;i<num;i++){
        int result;//isPrime의return값을 받을 변수
        result=isPrime(ptr[i]);
        //return 값이 1이면 cnt 1증가
        if(result==1) cnt++;
    }
    return cnt;
}
//소수 판별 함수
int isPrime(int n){
    if(n<2) return -1;//0과 1은 소수가 아님
    for(int i=2;i * i <=n;i++){  //i <= sqrt(n)과 동일
        if(n % i == 0) return -1;//나누어 떨어지면 소수가 아님
    }
    return 1;//끝까지 안 나눠지면 소수
}

