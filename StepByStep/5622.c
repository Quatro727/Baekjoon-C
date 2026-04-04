#include <stdio.h>
#include <string.h>

#define STRLEN 16

int main() {
    char str[STRLEN];
    
    // fgets로 안전하게 입력받기
    //입력 성공 시->입력 받은 배열의 주소 str을 return
    //입력 실패 시->NULL을 return
    if (fgets(str, STRLEN, stdin) == NULL) return 0;

    int sum = 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char c = str[i];
        
        // 각 문자 범위에 따라 시간을 계산
        if (c >= 'A' && c <= 'C') sum += 3;
        else if (c >= 'D' && c <= 'F') sum += 4;
        else if (c >= 'G' && c <= 'I') sum += 5;
        else if (c >= 'J' && c <= 'L') sum += 6;
        else if (c >= 'M' && c <= 'O') sum += 7;
        else if (c >= 'P' && c <= 'S') sum += 8; // S 포함
        else if (c >= 'T' && c <= 'V') sum += 9;
        else if (c >= 'W' && c <= 'Z') sum += 10;
    }

    printf("%d\n", sum);
    return 0;
}