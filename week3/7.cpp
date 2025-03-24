#include <bits/stdc++.h>
using namespace std;

int main(){
    string str = "This is a long string";
    int pos = str.find("is");
    cout << str[pos];
    cout << str.substr(pos);
}