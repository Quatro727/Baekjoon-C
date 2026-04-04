#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    int* ptr;

    scanf("%d", &n);

    ptr=(int*)calloc(n,sizeof(int));
    if(ptr==NULL){
        exit(EXIT_FAILURE);
    }
    
    for(int i=0;i<n;i++){
        scanf("%d", ptr+i);
    }
    int max=*ptr;
    for(int i=1;i<n;i++){
        if(*(ptr+i)>max){
            max=*(ptr+i);
        }
    }
    double sum=0;
    for(int i=0;i<n;i++){
        sum+=(double)*(ptr+i)/max*100;
    }
    printf("%lf", sum/n);

    free(ptr);
    ptr=NULL;

    return 0;
}