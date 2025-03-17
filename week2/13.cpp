#include <iostream>
using namespace std;

int main() {
    double number;
    cout << "실수를 입력하세요: ";
    cin >> number;

    // static_cast를 이용하여 정수 부분 추출
    int intPart = static_cast<int>(number);
    // 소수점 아랫부분 계산 (음수인 경우에도 올바른 결과를 얻기 위해 절대값을 고려할 수 있음)
    double fracPart = number - intPart;

    cout << "정수 부분: " << intPart << endl;
    cout << "소수점 아랫부분: " << fracPart << endl;

    return 0;
}