class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
   // int n=nums.size()/2;
    vector<int> arr;
    // int flag=0;
    int j=n;
    for(int i=0;i<n;i++){
        arr.push_back(nums[i]);
        arr.push_back(nums[j]);
        j++;
    }
    
    // if(flag==1){
    // for(int j=n;j<2*n;j++){
    //     arr.push_back(nums[j]);
    //     flag=0;
    // }
    // }
    return arr;
    }
};