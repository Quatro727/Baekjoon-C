/*bakjoon 2501.c*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,k;

    scanf("%d %d", &n, &k);

    //1.약수 구하기
    int i=1;
    int cnt=0;
    int* ptr=NULL;
    
    ptr=(int*)calloc(n,sizeof(int));
    
    while(i<=n){
        if((n%i)==0){
            *(ptr+cnt)=i;
            cnt++;
            i++;
            continue;
        }
        else{
            i++;
        }
    }
    printf("%d\n", *(ptr+k-1));
    
    free(ptr);
    ptr=NULL;

    return 0;
}

