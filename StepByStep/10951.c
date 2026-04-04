#include <stdio.h>

int main(){
    int a,b;
    int result;

    while(1){
        result=scanf("%d %d", &a, &b);
        
        if(result==EOF)
            break;
        printf("%d\n", a+b);
    }
    return 0;
}