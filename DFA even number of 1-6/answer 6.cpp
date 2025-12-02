#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int state = 0;


    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') {
            state = 1 - state;
        }
    }

    if (state == 0)
        cout << "Accepted\n";
    else
        cout << "Rejected\n";

    return 0;
}

