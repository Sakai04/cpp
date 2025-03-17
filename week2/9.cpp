#include <iostream>
using namespace std;

auto sum(int s, int e) { // 함수 원형 선언 없이도 정의 가능
    int tmp ;
    auto res = 0;
    if (s > e) {
        tmp = e;
        e = s;
        s = tmp;
    }
    for (auto k = s; k <= e; k++) {
        res += k;
    }
    return res;
}

int main() {
    int a, b;
    cout << "첫 수와 마지막 수를 입력하세요 : ";
    cin >> a >> b;

    // C++ 스타일 출력 사용
    cout << a << "부터 " << b << "까지의 합은 " << sum(a, b) << " 입니다." << endl;
    
    return 0;
}