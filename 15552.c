#include <stdio.h>

int main(){
    int c_num;
    scanf("%d", &c_num);

    for(int i=0;i<c_num;i++){
        int a,b;
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }
    return 0;
}