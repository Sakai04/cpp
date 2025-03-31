#include <iostream>
#include <string>
using namespace std;

class Hallym {
    string dept;
public:
    // 생성자: 매개변수 값을 멤버 변수로 초기화
    Hallym(string d) : dept(d) {}

    // 접근자 함수: 멤버 변수 값 반환
    string getDept() {
        return dept;
    }
};  // 클래스 선언 끝에 세미콜론 추가

int main() {
    // 객체 생성 및 테스트
    Hallym h("컴퓨터공학");
    cout << "Department: " << h.getDept() << endl;
    return 0;
}