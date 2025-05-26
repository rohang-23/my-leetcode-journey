class Solution {
public:
    void reversePart(int i, int j, vector<int>& nums) {
        while (i <= j) {
            // int temp = nums[i];
            // nums[i] = nums[j];
            // nums[j] = temp;
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
        return;
    }
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();
        if (k == n) {
            return;
        } else if (k > n) {
            k = k % n;
        }
        reversePart(0, n - k - 1, nums);
        reversePart(n - k, n - 1, nums);
        reversePart(0, n - 1, nums);
        return;
    }
};