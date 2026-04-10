/*baekjoon.c*/
#include <stdio.h> 

#define STRLEN 51

int main(){
    double point, results;//학점, 전체 평점
    double total_points=0;//전체 취득 학점
    char grade[3];//성적
    double total=0;//총 취득학점(성적X학점X20)

    //1. 과목, 학점, 성적 입력->20개
    for(int i=0;i<20;i++){
        char subj[STRLEN];
        scanf("%s %lf %s", subj, &point, grade);
        printf("\n");

        //성적->숫자로 환산
        if(grade[0]=='A'){
            if(grade[1]=='+'){
                total=total+(4.5*point);
            }
            if(grade[1]=='0'){
                total=total+(4.0*point);
            }
            total_points=total_points+point;
        }
        else if(grade[0]=='B'){
            if(grade[1]=='+'){
                total=total+(3.5*point);
            }
            if(grade[1]=='0'){
                total=total+(3.0*point);
            }
            total_points=total_points+point;
        }
        else if(grade[0]=='C'){
            if(grade[1]=='+'){
                total=total+(2.5*point);
            }
            if(grade[1]=='0'){
                total=total+(2.0*point);
            }
            total_points=total_points+point;
        }
        else if(grade[0]=='D'){
            if(grade[1]=='+'){
                total=total+(1.5*point);
            }
            if(grade[1]=='0'){
                total=total+(1.0*point);
            }
            total_points=total_points+point;
        }
        else if(grade[0]=='F'){
            total=total+(point*0.0);
            total_points=total_points+point;
        }
        else if(grade[0]=='P'){
            continue;
        }

    }
    
    //2. 전체 평균 평점 계싼
    results=total/total_points;

    //3. 결과 출력
    printf("%lf\n", results);
    return 0;
}


