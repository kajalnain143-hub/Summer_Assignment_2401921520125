#include<iostream>
#include<unordered_set>
using namespace std;
int lengthOfLongestSubstring(string s) {
    int n = s.size();
    int ans = 0;

    for(int i = 0; i < n; i++) {
        unordered_set<char> st;

        for(int j = i; j < n; j++) {

            if(st.count(s[j]))
                break;

            st.insert(s[j]);
            ans = max(ans, j - i + 1);
        }
    }

    return ans;
}