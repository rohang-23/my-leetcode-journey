class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        // int i=0;
        // while(i<n){
        //     int correctIndex=nums[i]-1;
        //     if(nums[correctIndex]==nums[i] || correctIndex==i){
        //         i++;
        //     }
        //     else{
        //         swap(nums[i],nums[correctIndex]);
        //     }

        // }
        // vector<int> v;
        // for(int i=0;i<n;i++){
        //     if(nums[i]!=i+1){
        //        v.push_back(i+1);
        //     }
        // }
        // return v;
        unordered_set<int> arr;
        for (int i = 0; i < n; i++) {
            arr.insert(nums[i]);
        }
        vector<int> ans;
        for (int i = 1; i <= n; i++) {
            if (arr.find(i) == arr.end()) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};