class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int k = 1;
        int i = 0, j = 0;
        int flips = 0, maxLen = 0;

        while (j < n) {
            if (nums[j] == 0) flips++;  // use a flip
            while (flips > k) {
                if (nums[i] == 0) flips--; // release a flip
                i++;
            }
            maxLen = max(maxLen, j - i+1);
            j++;
        }

        return maxLen-1;
    }
};