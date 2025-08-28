class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0;  // edge case      
        int n = nums.size();
        int product = 1, count = 0;
        int i = 0;
        for (int j = 0; j < n; j++) {
            product *= nums[j];          
            while (product >= k && i <= j) {
                product /= nums[i];
                i++;
            }
            count += (j - i + 1);
        }
        return count;
    }
};
