class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
     sort(nums.begin(),nums.end());
       // map<int,int> nums;
       int count=2;
    
        if(n<3){
             return nums[n-1];
        }
        else{
            for(int i=n-1;i>0;i--){
                if(nums[i]!=nums[i-1]){
                    count--;
                    if(count==0) {
                        return nums[i-1];
                        break;
                    }    
                }
            }
        }
        return nums[n-1];
    }
};