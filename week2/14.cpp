#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// 두 번째 인수와 가장 가까운 거리에 있는 문자를 찾는 함수
char list_exam(const vector<char>& chars, char target) {
    char closest = '\0';
    int minDistance = INT_MAX;
    
    // 모든 문자에 대해 거리를 계산하고 가장 작은 거리를 가진 문자를 찾음
    for (size_t i = 0; i < chars.size(); i++) {
        char c = chars[i];
        int distance = abs(c - target);
        if (distance < minDistance) {
            minDistance = distance;
            closest = c;
        }
    }
    
    return closest;
}

int main() {
    char arr1[] = {'d', 'p', 'r', 'w', 'g', 'f'};
    vector<char> vec1(arr1, arr1 + sizeof(arr1) / sizeof(arr1[0]));
    
    char arr2[] = {'k', 'q', 'b', 'r', 'a', 'e', 'v', 'z'};
    vector<char> vec2(arr2, arr2 + sizeof(arr2) / sizeof(arr2[0]));
    
    cout << "{ 'd', 'p', 'r', 'w', 'g', 'f' }문자 중 h와 가까운 문자는 : ";
    cout << list_exam(vec1, 'h') << endl;
    cout << "{ 'k', 'q', 'b', 'r', 'a', 'e', 'v', 'z'}문자 중 w와 가까운 문자는 : ";
    cout << list_exam(vec2, 'w') << endl;
    
    return 0;
}