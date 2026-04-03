/*baekjoon 2908.c*/
#include <stdio.h>
#include <string.h>//strcmp()

#define STRLEN 4

void reverse_3str(char*);
int main(){
    char num1[STRLEN];
    char num2[STRLEN];

    scanf("%s %s", num1, num2);
    /*
    <해당 코드를 함수화>
    char temp=num1[0];
    num1[0]=num1[2];
    num1[2]=temp;

    temp=num2[0];
    num2[0]=num2[2];
    num2[2]=temp;
    */
    reverse_3str(num1);
    reverse_3str(num2);
    /*바뀐 2개의 숫자 문자열이 크기 비교*/
    /*
    문자열의 각 문자를 비교하는 코드(초기 코드)
    //100의 자리 비교
    if(num1[0]>num2[0]){
        printf("%s\n", num1);
        return 0;
    }
    else if(num1[0]<num2[0]){
        printf("%s\n", num2);
        return 0;
    }
    //10의 자리 비교
    if(num1[1]>num2[1]){
        printf("%s\n", num1);
        return 0;
    }
    else if(num1[1]<num2[1]){
        printf("%s\n", num2);
        return 0;
    }
    //1의 자리 비교
        if(num1[2]>num2[2]){
        printf("%s\n", num1);
        return 0;
    }
    else if(num1[2]<num2[2]){
        printf("%s\n", num2);
        return 0;
    }
    */

    //strcmp() 함수를 이용한 숫자 문자열 비교
    if(strcmp(num1, num2)>0){
        printf("%s\n", num1);
    }
    else{
        printf("%s\n", num2);
    }
    
    return 0;
}