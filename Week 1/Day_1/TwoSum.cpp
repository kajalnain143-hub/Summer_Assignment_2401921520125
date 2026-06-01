

#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
/*
vector<int> Two_Sum(vector<int>&nums,int target){
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target){
              
               return {i,j};
            }
        }
    }
    return {};
}
vector<int> Better_TWo_Sum_Approach(vector<int>&nums,int target){
    vector<pair<int,int>>arr;
    for(int i=0;i<nums.size();i++){
        arr.push_back({nums[i],i});
    }
    sort(nums.begin(),nums.end());
    int left = 0;
    int right = nums.size()-1;
    while(left<right){
        if(nums[left]+nums[right]>target){
            right--;
        }
        else if(nums[left]+nums[right]<target){
            left++;
        }
        else{
            return {arr[left].second,arr[right].second};
        }
    }
    return {};
}
    */
   vector<int> Optimal_Two_Sum(vector<int>&nums,int target){
    unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        int need = target - nums[i];
        if(mp.find(need)!=mp.end()){
            return{mp[need],i};
        }
        mp[nums[i]]=i;
    }
      return {};
   }
int main(){
    vector<int>nums = {1,2,3,4,5};
    int target = 5;
    vector<int>result =Optimal_Two_Sum(nums,target);
    cout<<"Indecies are:";
    for(int x:result){
        cout << x << " ";
    }
}