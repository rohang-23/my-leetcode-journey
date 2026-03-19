class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        for(int i=0;i<=nums.size()-1;i++){
            ans[i] = nums[nums[i]];
        }
        return ans;
    }
};