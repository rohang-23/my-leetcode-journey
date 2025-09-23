class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        // int i=0;
        // int j=i+1;
        int count = 0;
        // while(j<=n){
        //     if(nums[i]==nums[j]){
        //         count++;
        //     }
        //     j++;
        // }
        // i++;
        for(int i =0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
        }
        return count;
    }
};