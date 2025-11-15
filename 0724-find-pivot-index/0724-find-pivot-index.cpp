class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int leftsum = 0;
        if(n==1) return 0;
        if(n==0) return -1; 
        for(int i=0;i<n;i++){
              sum += nums[i];
    
        }
        for(int i=0;i<n;i++){
              leftsum += nums[i];
              if(leftsum==(sum-leftsum+nums[i])){
                return i;
              }
        }
        return -1;
    }
};