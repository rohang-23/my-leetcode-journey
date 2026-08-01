class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        // vector<int> temp(n);

        for (int i = 0; i < n; i++) {
            int digit = 0;
            while (nums[i] > 0) {
                nums[i] = nums[i] / 10;
                digit++;
            }
            if (digit % 2 == 0) {
                ans++;
            }
        }
        return ans;
    }
};