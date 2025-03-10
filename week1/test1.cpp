#include <iostream>
using namespace std;

// 문자열의 길이를 계산하는 함수
int len(const char* str) {
    int length = 0;
    
    // 널 문자('\0')가 나올 때까지 카운트
    while (str[length] != '\0') {
        length++;
    }
    
    return length;
}

int main(int argc, char* argv[]) {
    // 명령줄 인자가 충분한지 확인
    if (argc < 2) {
        cout << "err" << endl;
        return 1;
    }
    
    cout << "argc = " << argc << endl;
    
    for (int i = 0; i < argc; i++) {
        cout << argv[i] << endl;
    }
    
    int result = len(argv[1]);
    cout << result << endl;
    
    return 0;
}