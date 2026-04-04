#include <stdio.h>

int main(){
    int num[9];//C99에서는 num[9]={}형식의 초기화를 지원하지 않음. 유의할 것
    int max,min;
    int index=0;

    //scanf() 함수의 동작 방식 이해하기!!->입력값들을 입력 버퍼에 저장 이후에 출력 버퍼로 내보냄
    //이때 공백 처리할 때 \n이나 공백을 모두 똑같이 공백으로 간주
    //따라서 정확하게 9개의 숫자를 읽을 때까지 입력 버퍼를 훑음
    for(int i=0;i<9;i++){
        scanf("%d", &num[i]);
    }

    max=num[0];

    for(int i=0;i<9;i++){
        if(max<num[i]){
            max=num[i];
            index=i;
        }
    }
    printf("%d\n%d\n", max, index+1);
    return 0;
}