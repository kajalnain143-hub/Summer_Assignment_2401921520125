// Remove duplicates from sorted array
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
/*
vector<int> Remove_Duplicate(vector<int>&nums){
    vector<int>ans;
    for(int i=0;i<nums.size();i++){
        
          if(nums[i]!=nums[i+1]){
            ans.push_back(nums[i]);
          }
        
        ans.push_back(nums[i]);
         }
         return ans;
    }
vector<int>Better_Remove_Duplicate(vector<int>&nums){
    unordered_map<int,int>mp;
    vector<int>ans;
     for(int i=0;i<nums.size();i++){
        
          if(mp.find(nums[i]) == mp.end()){
            ans.push_back(nums[i]);
            mp[nums[i]]=1;
          }
        
       
         }
         return ans;
}
         */
int Optimal_removeDuplicates(vector<int>& nums)
{
    int i = 0;

    for(int j = 1; j < nums.size(); j++)
    {
        if(nums[j] != nums[i])
        {
            i++;
            nums[i] = nums[j];
        }
    }

    return i + 1;
}

int main()
{
    vector<int> nums = {1,22,22,34,34,40,100};

    int k = Optimal_removeDuplicates(nums);

    for(int i = 0; i < k; i++)
    {
        cout << nums[i] << " ";
    }
}