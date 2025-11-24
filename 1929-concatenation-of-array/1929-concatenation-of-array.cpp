class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> nums1;
        for(int i=0;i<n;i++){
            nums1.push_back(nums[i]);
        }
        nums.insert(nums.end(),nums1.begin(),nums1.end());
        
        return nums;
    }
};