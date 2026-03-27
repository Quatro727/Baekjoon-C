#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int* ptr = (int*)calloc(n, sizeof(int));
    if (ptr == NULL) exit(EXIT_FAILURE);

    for (int i = 0; i < n; i++){
        *(ptr + i) = i + 1;
    }
    
    for (int k = 0; k < m; k++) {
        int i, j;
        scanf("%d %d", &i, &j);

        // 양 끝점에서 시작해 가운데로 모이는 방식
        int start = i - 1; // 0-based index
        int end = j - 1;

        while (start < end) {
            int temp = *(ptr + start);
            *(ptr + start) = *(ptr + end);
            *(ptr + end) = temp;
            start++;
            end--;
        }
    }

    for (int i = 0; i < n; i++){
        printf("%d ", *(ptr + i));
    } 
    
    free(ptr);
    ptr=NULL;
    return 0;
}