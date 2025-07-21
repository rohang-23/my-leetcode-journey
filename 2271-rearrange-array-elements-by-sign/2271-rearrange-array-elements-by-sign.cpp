class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> positive, negative;
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                positive.push_back(nums[i]);
            } else {
                negative.push_back(nums[i]);
            }
        }
        vector<int> result;
        int i = 0, j = 0;
        while (i < positive.size() && j < negative.size()) {
            result.push_back(positive[i]);
            result.push_back(negative[j]);
            i++;
            j++;
        }
        return result;
    }
};