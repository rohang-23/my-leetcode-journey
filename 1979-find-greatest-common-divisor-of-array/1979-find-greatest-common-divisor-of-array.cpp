class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        // int min = 0;
        // int max = 0;
        // for(int i=0;i<n-1;i++){
        //    if(nums[i]<nums[i+1]){
        //     min = nums[i];
        //    }
        // }
        sort(nums.begin(),nums.end());
        for(int i=nums[0];i>0;i--){
            if(nums[0]%i==0 && nums[n-1]%i==0){
                  return i;
            }
        }
   return 1;
    }
};