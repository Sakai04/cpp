#include <iostream>
#include <string>
using namespace std;

class Power {
    int kick;
    int punch;
public:
    Power(int kick=0, int punch=0)
      : kick{kick}, punch{punch} {
        cout << "생성자" << endl;
    }

    // 멤버 함수 버전
    Power operator*(const Power& rhs) const {
        return Power(kick * rhs.kick,
                     punch * rhs.punch);
    }

    void show(string obj) {
        cout << obj << ") kick=" << kick
             << ", punch=" << punch << endl;
    }
};

int main() {
    Power a(3,5), b(4,6), c;
    c = a * b;            // 멤버 함수 호출
    a.show("a");
    b.show("b");
    c.show("c");
    return 0;
}