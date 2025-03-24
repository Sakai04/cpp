#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    char c;
    cout << "문자열 입력: ";
    getline(cin, s);
    cout << "삭제하고자 하는 문자 입력: ";
    cin >> c;
    cin.ignore();
    s.erase(remove(s.begin(), s.end(), c), s.end());
    cout << "삭제 후 문자열 = " << s << "\n\n";

    string olds, news;
    cout << "문자열 입력: ";
    getline(cin, s);
    cout << "삭제하고자 하는 문자열 입력: ";
    getline(cin, olds);
    cout << "교체할 문자열 입력: ";
    getline(cin, news);
    size_t pos = 0;
    if(!olds.empty()){
        while((pos = s.find(olds, pos)) != string::npos){
            s.replace(pos, olds.length(), news);
            pos += news.length();
        }
    }
    cout << "변경된 문자열 = " << s << "\n";
    return 0;
}