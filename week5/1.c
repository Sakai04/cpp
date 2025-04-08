#include <stdio.h>

int main(void) {
    int n, sum = 0;
    
    // 숫자 입력 받기
    scanf("%d", &n);
    
    // 1부터 n까지의 합 계산
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    
    // 결과 출력
    printf("sum : %d\n", sum);
    
    return 0;
}