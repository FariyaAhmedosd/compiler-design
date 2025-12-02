#include <bits/stdc++.h>
using namespace std;

bool isIdentifierChar(char c) {
    return isalnum(c) || c == '_';
}

bool isOperator(char c) {
    return c=='+' || c=='-' || c=='*' || c=='/';
}

int main() {
    string s;
    getline(cin, s);

    int n = s.size();
    int paren = 0;  // parentheses counter
    bool lastWasOp = true;  // lastwasop keeps track whether the preious token was an operator
//starts with true cause expression cant starts with operator
    for (int i = 0; i < n; i++) {
        char c = s[i];

        if (c == ' ') continue;  //  spaces cant count

        if (c == '(') {
            paren++;
            lastWasOp = true;//operator cant come after(
        }
        else if (c == ')') //if closing parenthsis cames out before matching (
            {
            if (paren == 0) {
                cout << "Invalid\n";
                return 0;
            }
            paren--;
            lastWasOp = false;//after ) we treat it like a number or identifier
        }
        else if (isOperator(c)) {
            if (lastWasOp) //operator cant come after another operator
            {
                cout << "Invalid\n";
                return 0;
            }
            lastWasOp = true;
        }
        else if (isIdentifierChar(c))//if its a normal charracter of a variable or number
        {

            lastWasOp = false;//last charracter wasnt operator
        }
        else {
            cout << "Invalid\n";
            return 0;
        }
    }

    if (paren != 0) {
        cout << "Invalid\n";//parentheses  balanced na hole invalid
        return 0;
    }

    if (lastWasOp) {
        cout << "Invalid\n";//expression operaqtor diye shesh hbe na
        return 0;
    }

    cout << "Valid\n";
    return 0;
}
