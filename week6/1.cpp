#include <iostream>
#include <vector>

int main() {
    using namespace std;

    // 1) 배열 크기 입력
    cout << "array size? ";
    int n;
    cin >> n;

    // --- vector를 이용한 동적 배열 ---
    cout << "== vector array ==" << endl;
    vector<float> varr(n);

    // 값 입력
    for (int i = 0; i < n; ++i) {
        cout << "value? ";
        cin >> varr[i];
    }

    // 값 출력
    for (int i = 0; i < n; ++i) {
        cout << "varr[" << i << "]=" << varr[i] << endl;
    }

    // --- new를 이용한 동적 배열 ---
    cout << "== new array ==" << endl;
    float* narr = new float[n];

    // 값 입력
    for (int i = 0; i < n; ++i) {
        cout << "value? ";
        cin >> narr[i];
    }

    // 값 출력
    for (int i = 0; i < n; ++i) {
        cout << "narr[" << i << "]=" << narr[i] << endl;
    }

    // 할당 해제
    delete[] narr;

    return 0;
}