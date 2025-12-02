#include <iostream>
#include <string>
using namespace std;

string s;
int i = 0;

bool S() {
    if (i < s.size() && s[i] == '(') {
        i++;                    // consume '('
        if (!S()) return false; // parse inner S
        if (i >= s.size() || s[i] != ')') return false;
        i++;                    // consume ')'
        return S();             // parse following S
    }
    return true; // ε (empty)
}

int main() {
    getline(cin, s);

    if (S() && i == s.size())
        cout << "Valid\n";
    else
        cout << "Invalid\n";

    return 0;
}
