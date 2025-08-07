class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> run;
        run.push_back(nums[0]);
        for (int i=1;i<n;i++){
            nums[i] += nums[i-1];
            run.push_back(nums[i]);
        }
        return run;
    }
};