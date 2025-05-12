#include <iostream>
using namespace std;

class Power {
    int kick, punch;
public:
    Power(int k=0, int p=0) : kick(k), punch(p) {}
    Power& operator<<(int n) {
        kick <<= n;
        punch <<= n;
        return *this;
    }
    void show(const char* str) {
        cout << str << ": " << kick << ", " << punch << endl;
    }
};

int main() {
 Power a(2,3);
 a << 3;
 a.show("a");
 Power b(1,5);
 b << 1;
 b.show("b");
}