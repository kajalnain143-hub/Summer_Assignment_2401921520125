#include<iostream>
#include<vector>
using namespace std;
 bool canConstruct(string ransomNote, string magazine) {

        vector<int> freq(26, 0);

        for(char ch : magazine) {
            freq[ch - 'a']++;
        }

        for(char ch : ransomNote) {

            freq[ch - 'a']--;

            if(freq[ch - 'a'] < 0) {
                return false;
            }
        }

        return true;
    }
int main(){
     string ransomNote = "aa";
    string magazine = "aab";

    bool ans = canConstruct(ransomNote, magazine);

    cout << boolalpha << ans; 
}