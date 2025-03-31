#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    // 매개변수가 있는 생성자
    Person(const string &n, int a) : name(n), age(a) {}

    // default 생성자는 initializer를 사용해 매개변수가 있는 생성자를 호출
    Person() : Person("", 0) {}

    // 소멸자
    ~Person() {}

    // 접근자 함수
    string getName() const { return name; }
    int getAge() const { return age; }
};

int main() {
    Person baby;
    Person child("benny", 10);
    cout << "baby name = " << baby.getName() << endl;
    cout << "child age = " << child.getAge() << endl;
    return 0;
}