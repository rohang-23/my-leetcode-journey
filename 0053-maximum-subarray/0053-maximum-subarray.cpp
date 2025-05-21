class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = INT_MIN;
        int currSum = 0;
        for(int i=0;i<nums.size();i++){
          currSum = max(nums[i],currSum+nums[i]);
          maxsum = max(currSum,maxsum);//maxsum stores last inserted indice max value
         
        }
            return maxsum;
    }
};