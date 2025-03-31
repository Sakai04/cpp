#include <iostream>
using namespace std;

class Accumulator {
    int value;
public:
    Accumulator(int val) : value(val) { }
    Accumulator &add(int n);  // add 함수 선언
    int get() { return value; }
};

// add() 함수 정의: 클래스 외부에서 정의하므로 "Accumulator::"를 사용
Accumulator &Accumulator::add(int n) {
    value += n;
    return *this;
}

int main() {
    Accumulator acc(10);
    cout << acc.get() << endl; // 10 출력
    acc.add(1).add(2).add(3);    // 누적합 10 + 1 + 2 + 3 = 16
    cout << acc.get() << endl;   // 16 출력
    return 0;
}