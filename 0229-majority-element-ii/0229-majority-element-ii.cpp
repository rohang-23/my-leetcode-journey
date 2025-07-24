class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        if(nums.size()<2)
        {   

            return nums;
        }
        int n = nums.size()/3;
        for(int i =0;i<nums.size();i++)
        {
            int count=0;
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]==nums[j])
                {
                    count++;
                }
            }
            if(count==n)
            {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};