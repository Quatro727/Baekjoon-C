#include <stdio.h>
#include <stdlib.h>

int main(){
    int max, min, n;
    int* ptr=NULL;
    //입력할 정수의 개수 입력
    scanf("%d", &n);

    //n을 바탕으로 입력할 값 저장할 메모리 공간 확보(윈도우 환경은 VLA 지원 X)
    ptr=(int*)malloc(n*sizeof(int));

    //동적 메모리 할당 실패 시 프로그램 종료
    if(ptr==NULL){
        puts("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    //정수 n개 입력->할당된 메모리에 저장
    for(int i=0; i<n;i++){
        scanf("%d", ptr+i);
    }

    //기준값을  배열의 첫 번째 원소로 설정하여 min과 max 구하기
    min=*ptr;
    for(int i=0;i<n;i++){
        if(*(ptr+i)<min){
            min=*(ptr+i);
        }
    }
    //max값 구하기
    max=*ptr;
     for(int i=0;i<n;i++){
        if(*(ptr+i)>max){
            max=*(ptr+i);
        }
    }

    //결과값 출력
    printf("%d %d\n", min, max);

    //메모리 반납 및 포인터 초기화
    free(ptr);
    ptr=NULL;
    return 0;
}