#include <iostream>
#include <string>
using namespace std;

bool isSubsequence(string s, string t) {
    int i = 0, j = 0;

    while (i < s.length() && j < t.length()) {
        if (s[i] == t[j]) {
            i++;
        }
        j++;
    }

    return i == s.length();
}

int main() {
    string s, t;

    cout << "Enter s: ";
    cin >> s;

    cout << "Enter t: ";
    cin >> t;

    if (isSubsequence(s, t))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}