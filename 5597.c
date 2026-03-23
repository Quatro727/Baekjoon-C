#include <stdio.h>

int main(){
    int stu[30]={0,};//전체 학생의 출석 번호 저장
    int absent[2];//결석 번호
    int cnt=0;//결석 번호 개수 세기
    //출석 번호 저장
    for(int i=0;i<28;i++){
        int a;
        scanf("%d", &a);
        stu[a-1]=a;
    }   
    //출석 번호에서 결석 번호 찾기
    for(int i=0;i<30;i++){
        if(stu[i]==0){
            absent[cnt]=i+1;
            cnt++;
        }
    }
    //결석 번호 출력
    for(int i=0;i<2;i++){
        printf("%d\n", absent[i]);
    }
    return 0;
}