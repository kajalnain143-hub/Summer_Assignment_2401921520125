#include <iostream>
#include <vector>
using namespace std;

vector<int> findAnagrams(string s, string p) {

    vector<int> ans;

    int n = s.size();
    int m = p.size();

    if (m > n)
        return ans;

    vector<int> freqP(26, 0);
    vector<int> freqS(26, 0);

    for (char ch : p)
        freqP[ch - 'a']++;

    for (int i = 0; i < m; i++)
        freqS[s[i] - 'a']++;

    if (freqP == freqS)
        ans.push_back(0);

    for (int i = m; i < n; i++) {

        freqS[s[i] - 'a']++;       // add new char
        freqS[s[i - m] - 'a']--;   // remove old char

        if (freqP == freqS)
            ans.push_back(i - m + 1);
    }

    return ans;
}

int main() {

    string s = "cbaebabacd";
    string p = "abc";

    vector<int> ans = findAnagrams(s, p);

    for (int x : ans)
        cout << x << " ";

    return 0;
}