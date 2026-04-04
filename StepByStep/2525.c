#include <stdio.h>

int main() {
    int h, m, t;
    scanf("%d %d", &h, &m);
    scanf("%d", &t);

    // 1. 모든 시간을 '분'으로 변환한 뒤 요리 시간을 더함
    int total_minutes = h * 60 + m + t;

    // 2. 전체 분을 다시 시(h)와 분(m)으로 나눔
    h = (total_minutes / 60) % 24; // 24시가 넘어가면 0부터 시작하도록 %24 처리
    m = total_minutes % 60;

    printf("%d %d\n", h, m);

    return 0;
}