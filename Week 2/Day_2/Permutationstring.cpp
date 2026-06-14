#include <iostream>
#include <vector>
using namespace std;

bool checkInclusion(string s1, string s2) {

    int n = s1.size();
    int m = s2.size();

    if (n > m)
        return false;

    vector<int> freq1(26, 0);
    vector<int> freq2(26, 0);

    for (char ch : s1)
        freq1[ch - 'a']++;

    for (int i = 0; i < n; i++)
        freq2[s2[i] - 'a']++;

    if (freq1 == freq2)
        return true;

    for (int i = n; i < m; i++) {

        freq2[s2[i] - 'a']++;          // add new character
        freq2[s2[i - n] - 'a']--;      // remove old character

        if (freq1 == freq2)
            return true;
    }

    return false;
}

int main() {

    string s1 = "ab";
    string s2 = "eidbaooo";

    if (checkInclusion(s1, s2))
        cout << "True";
    else
        cout << "False";

    return 0;
}