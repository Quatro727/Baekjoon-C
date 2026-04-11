/*baekjoon 2566.c*/
#include <stdio.h>

int main(){
    int matrix[9][9];
    
    //1. 9x9 행렬 원소 입력
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    
    //2. 각 행의 최댓값고 해당 최댓값의 위치(열 번호 구하기)
    int col_max[9][2];
    for(int i=0;i<9;i++){
        int max=matrix[i][0];//각 행의 첫 번째 원소로 max 초기화
        int col_idx=0;//max의 열 번호
        for(int j=0;j<9;j++){
            if(max<matrix[i][j]){
                max=matrix[i][j];
                col_idx=j;
            }
        }
        col_max[i][0]=col_idx;
        col_max[i][1]=max;
    }
    
    //3. 구한 최댓값들을 비교-->최종 MAX와 해당 MAX의 열 번호, 행 번호 구하기

    //초기화
    int max=col_max[0][1];//max는 0행의 최댓값으로 초기화
    int row=0;//0행부터 시작하므로 0으로 초기화
    int col=col_max[0][0];//col은 0행 최댓값의 열 번호로 초기화
    
    for(int i=0;i<9;i++){
        if(max<col_max[i][1]){
            max=col_max[i][1];
            row=i;
            col=col_max[i][0];
        }
    }
    printf("%d\n", max);
    printf("%d %d\n", row+1, col+1);
    
    return 0;
}