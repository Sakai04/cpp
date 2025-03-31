#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
using std::string;

namespace Bank {

// 메뉴를 위한 열거형 (값은 main에서 사용된 번호와 일치)
enum class MENU {
    DEPOSIT = 1,   // 입금
    WITHDRAW = 2,  // 출금
    CHECK = 3,     // 조회
    QUIT = 4       // 종료
};

class Account {
private:
    string owner;  // 예금주명
    int balance;   // 잔액
public:
    // 생성자: 예금주명과 초기 잔액을 받아 멤버 초기화
    Account(const string &name, int balance);

    // 소멸자: 객체 소멸 시 메시지 출력
    ~Account();

    // 입금: 잔액에 금액을 추가
    void deposit(int amount);

    // 출금: 잔액에서 금액을 차감 후, 출금액 반환
    int withdraw(int amount);

    // 조회: 현재 잔액 반환 (const 함수)
    int check() const;

    // 예금주명 반환 (const 함수)
    string getOwner() const;
};

} // namespace Bank

#endif // ACCOUNT_H