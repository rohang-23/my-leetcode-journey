class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //     for (int i = 0; i <nums.size(); i++) {
    //         for(int j=i+1;j<nums.size();j++){
    //             if(nums[i]+nums[j]==target){
    //                 return{i,j}; 
    //             }
    //         }
    //     }
    //     return {};
    // }   
        unordered_map<int, int> numMap;
        int n = nums.size();
        // Build the hash table
        for (int i = 0; i < n; i++) {
            numMap[nums[i]] = i;
        }
        // Find the complement
        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];
            if (numMap.count(complement) && numMap[complement] != i) {
                return {i, numMap[complement]};
            }
        }

        return {}; // No solution found
    }
};
