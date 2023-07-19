// Running Sum of 1D Array

/* 
* Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
* Return the running sum of nums.
*/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        printf(ans(nums));
    }
    vector<int> ans(vector<int>& nums) {
        // Runtime: 2ms (faster than 72.83%) | Memory: 8.52MB (less than 15.12%)
        for(int i = 1;i < nums.size();i++){
            nums[i] = nums[i-1]+nums[i];
        }
        return nums;
    }
};