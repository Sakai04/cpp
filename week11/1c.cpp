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

    // A. 멤버 함수로서의 덧셈 연산자
    Power operator+(const Power& rhs) const {
        // 각 객체의 kick, punch를 더해서 새 Power 객체 반환
        return Power(this->kick + rhs.kick,
                     this->punch + rhs.punch);
    }

    // B. 멤버 함수로서 Power + int 연산자
    Power operator+(int value) const {
        // kick과 punch에 동일한 상수 더하기
        return Power(this->kick + value,
                     this->punch + value);
    }

    void show() {
        cout << "kick=" << kick
             << ", punch=" << punch
             << endl;
    }
};

int main() {
    // Power + Power test
    Power a(2, 5);
    Power c(1, 1);
    Power d = a + c;
    d.show();

    // Power + int test
    Power b = a + 2;
    b.show();

    return 0;
}