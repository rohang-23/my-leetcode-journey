class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int ans = nums[0];
        for (int i = 2; i < n; i+=2) {
           
                ans = ans + nums[i];
            
        }
        return ans;
    }
};