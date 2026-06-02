#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;

        for(int num : nums) {
            if(st.find(num) != st.end()) {
                return true;
            }

            st.insert(num);
        }

        return false;
    
}
int main() {
    vector<int> nums = {1, 2, 3, 1};

    if(containsDuplicate(nums)) {
        cout << "Duplicate Found";
    }
    else {
        cout << "No Duplicate Found";
    }

    return 0;
}
