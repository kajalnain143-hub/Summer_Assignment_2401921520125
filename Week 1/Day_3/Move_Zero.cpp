#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 void moveZeroes(vector<int>& nums) {
        
           int i=0,j = 1;
    while(j<nums.size()){
    
    if(nums[i]==0 && nums[j]!=0){
        swap(nums[i],nums[j]);
        i++;
        j++;

    }
    else 
    if(nums[i]!=0){
        j++;
        i++;
    }
    else if(nums[j]==0){
        j++;
    }
    if(nums.size()<=1){
            return;
        }
}
 }
int main(){
    vector<int>nums = {1,0,3,0,5};
    moveZeroes(nums);
    for(int x : nums){
        cout<< x <<" ";
    }
}