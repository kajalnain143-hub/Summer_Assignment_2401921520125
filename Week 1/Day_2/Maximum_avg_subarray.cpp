#include<iostream>
#include<vector>
using namespace std;
    double findMaxAverage(vector<int>& nums, int k) {
        int windowSum = 0;

        // First window
        for(int i = 0; i < k; i++) {
            windowSum += nums[i];
        }

        int maxSum = windowSum;

        // Slide the window
        for(int i = k; i < nums.size(); i++) {
            windowSum += nums[i];
            windowSum -= nums[i - k];

            maxSum = max(maxSum, windowSum);
        }

        return (double)maxSum / k;
    }
int main() {
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;

    double ans = findMaxAverage(nums, k);

    cout << "Maximum Average = " << ans << endl;

    return 0;
}
