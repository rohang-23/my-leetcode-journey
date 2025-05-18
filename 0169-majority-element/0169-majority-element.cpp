class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // int mode = nums[0];
        // int currCount = 1;
        // int maxCount = 0;
        
        // for(int i = 1 ; i < nums.size() ; i++){
        //     if(nums[i] == nums[i-1]){
        //         currCount++;
        //     }
        //     else{
        //         currCount = 1;
        //     }
        //     if(currCount > maxCount){
        //         maxCount = currCount;
        //         mode = nums[i];
        //     }
           
        // }
        // return mode;
        int n = nums.size();
            return nums[n/2];     
    }
};