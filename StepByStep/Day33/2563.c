/*baekjoon 2563.c*/
#include <stdio.h>
#include <stdlib.h>

#define LENGTH 10000

void attach_paper(int*, int, int);
int main(){
    int num;
    int* ptr;
    
    //1. 하얀 도화지 공간(100x100) heap에 할당받기
    ptr=(int*)calloc(LENGTH, sizeof(int));
    
    //2. 사용할 색종이 수
    scanf("%d", &num);
    
    //3. 색종이 붙이기
    for(int i=0;i<num;i++){
        int r;
        int c;
        scanf("%d %d", &r, &c);
        attach_paper(ptr, r, c);
    }
    
    //4. 검은색 영역 계산
    int results=0;
    for(int i=0;i<LENGTH;i++){
        if(*(ptr+i)==1){
            results+=1;
        }
    }
    
    //5. 메모리 반납
    free(ptr);
    ptr=NULL;
    
    printf("%d\n", results);
    
    return 0;
}
//하얀 도화지 칠하는 함수
void attach_paper(int* start, int row, int col){
    for(int i=row;i<row+10;i++){
        for(int j=col;j<col+10;j++){
            *(start+i*100+j)=1;
        }
    }
}
