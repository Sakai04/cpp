#include <iostream>
#include <string>
using namespace std;

void find2replace(string &fstr, string fhas, string frep, bool &fres) {
    if (fhas.empty()) {
        fres = false;
        return;
    }
    size_t pos = fstr.find(fhas);
    if (pos == string::npos) {
        fres = false;
        return;
    }
    fres = true;
    while (pos != string::npos) {
        fstr.replace(pos, fhas.size(), frep);
        pos = fstr.find(fhas, pos + frep.size());
    }
}

int main() {
    string str = "C++ programming";
    string has = "+";
    string rep = "p";
    bool result = false;
    cout << "변경 전 문자열 = " << str << endl;
    find2replace(str, has, rep, result);
    if (result)
        cout << "변경 후 문자열 = " << str << endl;
    else
        cout << str << "에서 " << has << "를 발견하지 못함." << endl;
    return 0;
}