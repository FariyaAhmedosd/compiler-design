#include<bits/stdc++.h>
using namespace std;
string s;
int i = 0;
bool id() {
    if (!(isalpha(s[i]) || s[i] == '_')) return false;
    i++;
    while (isalnum(s[i]) || s[i] == '_') i++;
    return true;
}
bool L() {
    if (!id()) return false;
    if (s[i] == ',') {
        i++;
        return L();
    }
    return true;
}
int main() {
    getline(cin, s);
    if (L() && i == s.size())
        cout << "Valid\n";
    else
        cout << "Invalid\n";
}

