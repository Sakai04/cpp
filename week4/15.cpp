#include <iostream>
using namespace std;

class Account {
    int balance; // 잔액
public:
    Account(int deposit) : balance(deposit) { }
    int getBalance() { return balance; }
    void setBalance(int deposit) { this->balance = deposit; }
    void show() {
        cout << "잔액은 " << balance << "원 입니다." << endl;
    }
};

// increaseBy() 함수: Account 객체의 잔액에 입금액을 누적 저장합니다.
void increaseBy(Account &acc, int deposit) {
    acc.setBalance(acc.getBalance() + deposit);
}

int main() {
    Account acc(500);
    cout << "입금 전 "; acc.show();
    int in;
    cout << "입금액 : "; cin >> in;
    increaseBy(acc, in);
    cout << "입금 후 "; acc.show();
    
    return 0;
}