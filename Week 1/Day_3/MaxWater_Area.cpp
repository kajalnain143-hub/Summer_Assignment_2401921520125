#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*  BruteForce
int maxArea(vector<int>&nums){
   int max_Area = 0;
   for(int i=0;i<nums.size();i++){
    for(int j=i+1;j<nums.size();j++){
        int width = j-i;
        int height = min(nums[i],nums[j]);
        int area = width * height;
        max_Area = max(max_Area,area);
    }
   }
   return max_Area;
}
   */
int max_Area(vector<int>&height){
    int left = 0;
    int right = height.size()-1;
    int max_Area = 0;
    while(left<right){
        int width = right - left;
        int hgt = min(height[left],height[right]);
        int area = width * hgt;
        max_Area=max(area,max_Area);
        if(height[left] < height[right]) {
                left++;
            }
            else {
                right--;
            }
        }
       return max_Area;
    }

int main(){
    vector<int>nums = {1,8,6,2,5,4,8,3,7};
    int result = max_Area(nums);
    cout<< result;
}