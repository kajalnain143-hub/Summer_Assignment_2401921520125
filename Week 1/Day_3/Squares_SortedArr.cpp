#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> sortedSquare(vector<int>&nums){
    vector<int>ans;
    for(int i=0;i<nums.size();i++){
        int n = nums[i];
        ans.push_back(n*n);

    }
    sort(ans.begin(),ans.end());
    nums = ans;
    return nums;
}
int main(){
    vector<int>nums ={1,2,0,-1,4};
    sortedSquare(nums);
    for( int x : nums){
        cout<< x << " ";
    }
}