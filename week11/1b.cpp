#include <iostream>
using namespace std;

class Power {
    int kick;   // 발로 차는 힘
    int punch;  // 주먹으로 치는 힘
public:
    Power(int kick = 0, int punch = 0)
      : kick{kick}, punch{punch} {
        cout << "생성자" << endl;
    }

    // 멤버 함수로서 Power + int 연산자
    Power operator+(int value) const {
        return Power(this->kick + value,
                     this->punch + value);
    }

    // C. 프렌드 함수로서 Power + Power 연산자
    friend Power operator+(const Power& lhs, const Power& rhs);

    void show() {
        cout << "kick=" << kick
             << ", punch=" << punch
             << endl;
    }
};

// C. 프렌드 함수 정의: Power + Power
Power operator+(const Power& lhs, const Power& rhs) {
    return Power(lhs.kick + rhs.kick,
                 lhs.punch + rhs.punch);
}

int main() {
    Power a(2, 5);
    Power b = a + 2;      // Test Power + int
    Power c(1, 1);
    Power d = a + c;      // Test Power + Power
    b.show();             // 출력 확인
    d.show();
    return 0;
}