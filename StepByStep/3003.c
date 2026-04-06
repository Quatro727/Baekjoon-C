/*baekjoon 3003.c*/
#include <stdio.h>

int main(){
    int chess_normal[6]={1,1,2,2,2,8};
    char chess_input1[20];
    int chess_input2[6];
    int results[6];
    /*
    for(int i=0;i<6;i++){
        if(scanf("%d", &chess_abnormal[i])!=1)
            break;
    }
    */
   //1. fgets() 함수를 이용해 문자열로 입력을 받는다.
    fgets(chess_input1, sizeof(chess_input1), stdin);

    //2. sscanf() 함수를 이용해 입력받은 문자열(공백, \n 문자 등)이 섞인 입력에서 원하는 형식으로 데이터 파싱
    sscanf(chess_input1, "%d %d %d %d %d %d",
        &chess_input2[0], &chess_input2[1], &chess_input2[2], 
        &chess_input2[3], &chess_input2[4], &chess_input2[5]);
    
    //3. 파싱한 데이터를 이용해서 정상 체스 갯수를 기준으로 불량 체스 갯수를 계산
    for(int i=0;i<6;i++){
        results[i]=chess_normal[i]-chess_input2[i];
        printf("%d ", results[i]);
    }

    return 0;
}