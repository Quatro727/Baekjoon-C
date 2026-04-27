/*baekjoon 1085.c*/
#include <stdio.h>

int main(){
    int x,y,w,h;
    
    scanf("%d %d %d %d", &x, &y, &w, &h);

    int min_width, min_length;
    
    //경계까지의 최소값 구하기
    //가로 시점에서의 min값
    if(( w - x ) > x){
        min_width = x;
    }
    else{
        min_width = w - x;
    }
    //세로 시점에서의 min값
    if(( h - y ) > y){
        min_length = y;
    }
    else{
        min_length = h - y;
    }

    //최종적인 최소 경계 거리 구하기
    if( min_width > min_length ){
        printf("%d\n", min_length);
    }
    else{
        printf("%d\n", min_width);
    }
    return 0;
}
