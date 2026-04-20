/*bakejoon 5086.c*/
#include <stdio.h>

int main(){
    int num1, num2;

    while(1){
        //1. 두 개의 정수 입력
        scanf("%d %d", &num1, &num2);
        //2. 약수, 배수 판단
        if(num1==0&&num2==0){
            break;
        }
        else if((num2%num1)==0){
            printf("factor\n");
            continue;
        }
        else if((num1%num2)==0){
            printf("multiple\n");
        }
        else{
            printf("neither\n");
        }

    }

    return 0;
}
