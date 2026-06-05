#include<iostream>
#include<vector>
using namespace std;
void reverseString(vector<char>& s) {
        int left =0;
        int right = s.size() -1;
        while(left<right){
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
    }
int main(){
    vector<char> s = {'h','e','l','l','o'};
    reverseString(s);
    for(char x : s){
        cout<< x << " ";
    }
}