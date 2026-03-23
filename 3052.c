#include <stdio.h>

int main() {
    int input, remain;
    int check[42] = {0,}; // 0~41까지의 나머지를 체크할 배열 (0으로 초기화)
    int count = 0;

    for(int i = 0; i < 10; i++) {
        scanf("%d", &input);
        remain = input % 42;
        
        // 해당 나머지가 처음 등장했다면 카운트 증가
        if(check[remain] == 0) {
            count++;
            check[remain] = 1; // "이미 확인했음" 표시
        }
    }

    printf("%d\n", count);
    return 0;
}