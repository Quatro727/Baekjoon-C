/*baekjoon 9506.c*/
#include <stdio.h>
#include <stdlib.h>

void get_factor(int, int*);
int check_perfect(int, int*);
void printPerfect(int, int*, int);

int main(){
    int num;
    
    while(1){
        //1. 숫자 입력
        scanf("%d", &num);

        //2.입력값이 -1이면 무한 루프 탈출
        if(num==-1) break;
        
        //3. 약수들의 배열을 저장할 메모리 공간 할당
        int* ptr=(int*)calloc(num, sizeof(int));
        
        //4. 약수들을 구하는 함수 get_factor 
        get_factor(num, ptr);

        //5. 완전수 인지 아닌지 확인하는 함수
        int result;
        result=check_perfect(num, ptr);

        //6. 결과 출력
        if(result==-1){
            printf("%d is NOT perfect.\n", num);
        }
        else{
            printPerfect(num, ptr, result);
        }

        //7. 메모리 할당 해제
        free(ptr);
        ptr=NULL;
    }
    return 0;
}
//약수 구하는 함수
void get_factor(int num, int* ptr){
    int i=1;
    int cnt=0;

    while(i<=num){
        if((num%i)==0){
            *(ptr+cnt)=i;
            cnt++;
            i++;
        }
        else{
            i++;
        }
    }
}
//완전수 판단 함수
int check_perfect(int num, int* ptr){
    int total=0;
    int cnt=0;
    //약수들의 합 구하기
    for(int i=0;*(ptr+i)!=num;i++){
        total+=*(ptr+i);
        cnt++;//자기 자신을 제외한 약수들의 개수
    }

    if(total==num) return cnt;//완전수이면 cnt 반환
    else return -1;//아니면 -1 반환
}

//결과 출력
void printPerfect(int num, int* ptr, int count){
    int plus_check=0;

    printf("%d = ", num);
    for(int i=0;*(ptr+i)!=num;i++){
        printf("%d",*(ptr+i));
        plus_check++;
        
        if(plus_check==count) break;
        printf(" + ");
    }
    printf("\n");
}
