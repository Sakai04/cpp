#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[4];
    
    cout << "네 개의 정수 입력 : ";
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }
    
    // 배열 원본 내용 출력
    cout << "배열의 저장된 내용 : ";
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // 벡터로 변환하여 정렬에 사용
    vector<int> v(arr, arr + 4);
    
    // 오름차순 정렬 적용
    sort(v.begin(), v.end());
    
    // 오름차순 정렬 결과 출력
    cout << "배열의 오름차순 정렬 : ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    
    return 0;
}