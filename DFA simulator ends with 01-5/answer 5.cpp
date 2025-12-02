
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    // Check if the string ends with "01"
    if (s.size() >= 2 && s[s.size() - 2] == '0' && s[s.size() - 1] == '1')
        cout << "Accepted\n";
    else
        cout << "Rejected\n";

    return 0;
}
