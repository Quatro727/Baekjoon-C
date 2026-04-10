/*baekjoon 2738.c*/
#include <stdio.h>
#include <stdlib.h>

#define MAX

int main(){
    int n,m;
    
    //1. 행렬의 크기(n:행, m:열)
    scanf("%d %d", &n, &m);

    //2. 행렬 A, 행렬 B 생성(n x m 행렬)
    int* ptr_a=NULL;
    int* ptr_b=NULL;

    ptr_a=(int*)malloc(n*m*sizeof(int));
    ptr_b=(int*)malloc(n*m*sizeof(int));

    //3. 행렬 A 입력
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", ptr_a+i*m+j);
        }
    }

    //4. 행렬 B 입력
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", ptr_b+i*m+j);
        }
    }

    //5. 행렬 덧셈 연산
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ", *(ptr_a+i*m+j)+*(ptr_b+i*m+j));
        }
        printf("\n");
    }

    //6. 메모리 반납
    free(ptr_a);
    free(ptr_b);
    ptr_a=NULL;
    ptr_b=NULL;
    
    return 0;
    /*
    scanf()가 위험한 것은 맞지만 그렇다고 무작정 fgets()로 모든 입력을 처리하려는 것은 
    오히려 훨씬 더 복잡한 문제를 야기한다. 필요한 경우에는 scanf()를 적절히 사용하는 것도
    충분히 고려해볼만한 하다.
    */
}
