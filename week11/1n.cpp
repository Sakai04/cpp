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

    // 멤버 함수로서 Power + int 연산자
    Power operator+(int value) const {
        return Power(this->kick + value,
                     this->punch + value);
    }

    void show() {
        cout << "kick=" << kick
             << ", punch=" << punch
             << endl;
    }

    // operator+= 추가
    Power& operator+=(const Power& rhs) {
        this->kick += rhs.kick;
        this->punch += rhs.punch;
        return *this;
    }
};

int main() {
    Power *a = new Power(3,5);
    Power *b = new Power(2,4);

    // operator+= and show calls
    (*a) += (*b);
    a->show();

    delete a;
    delete b;
    return 0;
}