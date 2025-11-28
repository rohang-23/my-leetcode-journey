class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> arr;
        int i = 0;
        int missingno;
        int duplicatedno;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i + 1] == nums[i]) {
                duplicatedno = nums[i];
                break;
            }
        }
        int actualsum = (n * (n + 1)) / 2;
        int currsum = 0;
        for (int i = 0; i < n; i++) {
            currsum += nums[i];
        }
        missingno = actualsum - (currsum - duplicatedno);
        return {duplicatedno, missingno};
    }
};