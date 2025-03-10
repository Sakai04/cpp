#include <stdio.h>
#include <string.h>

int pointer_strcmp(const char *s1, const char *s2) {
    // 포인터를 이용하여 한 글자씩 비교
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

int main() {
    char str1[1000], str2[1000];

    // 방법 b) fgets를 이용한 문자열 입력
    if (fgets(str1, sizeof(str1), stdin) != NULL) {
        size_t len = strlen(str1);
        if (len > 0 && str1[len - 1] == '\n')
            str1[len - 1] = '\0';
    }
    if (fgets(str2, sizeof(str2), stdin) != NULL) {
        size_t len = strlen(str2);
        if (len > 0 && str2[len - 1] == '\n')
            str2[len - 1] = '\0';
    }
    
    // 포인터를 이용한 비교 결과 출력
    if (pointer_strcmp(str1, str2) == 0)
        printf("Same\n");
    else
        printf("Different\n");
        
    return 0;
}