
#include <iostream>
#include <string>
using namespace std;

string s;
int i = 0;

bool S() {
    if (i < s.size() && s[i] == 'a') {
        i++; // consume 'a'

        // Case 1: "ab"
        if (i < s.size() && s[i] == 'b') {
            i++; // consume 'b'
            return true;
        }

        // Case 2: "a S b"
        if (!S()) return false;

        if (i >= s.size() || s[i] != 'b') return false;
        i++; // consume 'b'

        return true;
    }

    return false;
}

int main() {
    cin >> s;

    if (S() && i == s.size())
        cout << "Valid\n";
    else
        cout << "Invalid\n";

    return 0;
}
