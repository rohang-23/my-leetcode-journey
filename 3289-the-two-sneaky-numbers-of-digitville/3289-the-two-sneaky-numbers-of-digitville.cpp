class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_set<int> st,dup;
        for(int x: nums){
             if(st.count(x)) dup.insert(x);
                st.insert(x);
             
        }
        return vector<int>(dup.begin(),dup.end());
    }
};