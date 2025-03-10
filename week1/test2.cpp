#include <iostream>
using namespace std;

int main() {
    const int SIZE = 100;
    char str1[SIZE], str2[SIZE];

    cout << "첫 번째 문자열을 입력하세요: ";
    cin.getline(str1, SIZE);

    cout << "두 번째 문자열을 입력하세요: ";
    cin.getline(str2, SIZE);

    // 포인터를 사용하여 문자열 비교
    char *p1 = str1;
    char *p2 = str2;
    bool equal = true;

    // 각 문자 비교
    while(*p1 != '\0' && *p2 != '\0') {
        if(*p1 != *p2) {
            equal = false;
            break;
        }
        p1++;
        p2++;
    }
    // 문자열의 길이가 다를 경우
    if(*p1 != *p2)
        equal = false;

    if(equal)
        cout << "두 문자열은 같습니다." << endl;
    else
        cout << "두 문자열은 다릅니다." << endl;

    return 0;
}