class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n);
        int product=nums[0];
        prefix[0] = 1;
        for(int i = 1;i<n;i++){
            prefix[i] = product;
            product *= nums[i];
        }
        
        product = nums[n-1];
        for(int i=n-2;i>=0;i--){
            prefix[i] *= product;
            product *=nums[i];
                
        }
        return prefix;
       
    }
};