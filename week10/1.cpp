#include <iostream>
using namespace std;

// arr2가 넘어오지 않으면 nullptr, size2는 0이 됨
int add(const int* arr1, int size1, const int* arr2 = nullptr, int size2 = 0) {
    int sum = 0;
    // 첫 번째 배열 합산
    for (int i = 0; i < size1; ++i) {
        sum += arr1[i];
    }
    // 두 번째 배열이 주어졌으면 합산
    if (arr2) {
        for (int i = 0; i < size2; ++i) {
            sum += arr2[i];
        }
    }
    return sum;
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {6, 7, 8, 9, 10, 11};

    int c = add(a, sizeof(a)/sizeof(int));                    // a만 합산 → 15
    int d = add(a, sizeof(a)/sizeof(int), b, sizeof(b)/sizeof(int)); // a+b 합산 → 66

    cout << c << endl; // 15
    cout << d << endl; // 66

    return 0;
}