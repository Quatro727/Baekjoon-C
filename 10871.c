#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,x;
    int *ptr=NULL;
    scanf("%d %d", &n, &x);

    ptr=(int*)malloc(n*sizeof(int));

    if(ptr==NULL){
        puts("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    for(int i=0;i<n;i++){
        scanf("%d", ptr+i);
    }

    for(int i=0;i<n;i++){
        if(*(ptr+i)<x){
            printf("%d ", *(ptr+i));
        }
    }

    free(ptr);
    ptr=NULL;

    return 0;
}