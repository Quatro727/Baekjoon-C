
/*baekjoon 1316.c*/
#include <stdio.h>
#include <string.h>

#define STRLEN 101

int main() {
    int n;
    int cnt = 0;

    //1. 입력할 단어의 개수
    scanf("%d", &n);
    getchar(); // 중요: 입력 버퍼에 남은 엔터('\n')를 제거

    //2. 단어 입력->그룹 단어 판별
    for (int i = 0; i < n; i++) {
        //2-1. 단어 입력
        char str[STRLEN];
        fgets(str, STRLEN, stdin);
        str[strcspn(str, "\n")] = '\0'; // 개행 문자 제거

        //2-2. 그룹 단어 판별
        int alpha[26] = {0,};
        int is_group = 1; // 일단 그룹 단어라고 가정
        
        for (int j = 0; str[j] != '\0'; j++) {
            // 현재 문자가 처음 등장하는가?
            if (alpha[str[j] - 'a'] == 0) {
                alpha[str[j] - 'a'] = 1;
            } 
            // 이미 등장했던 문자인데, 바로 앞 문자와 다르다면 (떨어져서 나타남)
            else if (str[j] != str[j - 1]) {
                is_group = 0; // 그룹 단어가 아님!
                break;
            }
        }
        
        if (is_group)cnt++;
    }

    //3. 그룹 단어의 개수 출력
    printf("%d\n", cnt);
    return 0;
}