class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int low=0;
        int high=n-1;
        sort(nums.begin(),nums.end());
        while(low<=high){
            int mid=low +(high-low)/2;
            if(nums[mid]==target){
                 return true;
                 break;
            }
            else if(nums[mid]>target) {
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }
        return false;
    }
};