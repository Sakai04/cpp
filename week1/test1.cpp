#include <iostream>
using namespace std;

// len() 함수: 포인터로 전달 받은 문자열의 길이를 리턴합니다.
int len(const char* str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

int main(int argc, char* argv[]) {
    // 매개변수가 부족하면 사용법을 안내합니다.
    if (argc < 2) {
        cout << "사용법: " << argv[0] << " <문자열>" << endl;
        return 1;
    }
    
    // 메인함수의 매개변수에서 첫 번째 문자열을 받아 len() 함수로 전달
    int length = len(argv[1]);
    
    // len()에서 리턴된 문자열 길이를 출력
    cout << length << endl;
    
    return 0;
}