#include <iostream>
using namespace std;

enum class RPS { Rack = 1, Paper = 2, Scissors = 3 };

int main() {
    int input;
    cout << "정수를 입력하세요 (1: Rack, 2: Paper, 3: Scissors): ";
    cin >> input;

    // 입력 값이 1, 2, 3 이외인 경우 if 문으로 체크
    if (input < 1 || input > 3) {
        cout << "잘못된 입력입니다." << endl;
        return 1;
    }

    // static_cast를 사용하여 int를 enum class 타입으로 변환
    RPS choice = static_cast<RPS>(input);

    // switch 문을 사용하여 각 열거형에 해당하는 값을 출력
    switch (static_cast<int>(choice)) {
        case static_cast<int>(RPS::Rack):
            cout << "Rack" << endl;
            break;
        case static_cast<int>(RPS::Paper):
            cout << "Paper" << endl;
            break;
        case static_cast<int>(RPS::Scissors):
            cout << "Scissors" << endl;
            break;
    }
    return 0;
}