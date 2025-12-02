// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int n = s.length();
//         int curr=0;
//         int maxsum=0;
//         int ans=0;
//         for(int i=0;i<n-1;i++){
//             if(s[i+1]!=s[i]){
//                 curr++;
//             }
//         ans = max(curr,maxsum);
//     }
//     return ans;
//     }
// };
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_set<char> st;
        int i = 0, j = 0;       // sliding window
        int ans = 0;

        while (j < n) {
            // if char not found → expand window
            if (st.find(s[j]) == st.end()) {
                st.insert(s[j]);
                ans = max(ans, j - i + 1);
                j++;
            } 
            else {
                // if char found → shrink window from left
                st.erase(s[i]);
                i++;
            }
        }
        return ans;
    }
};
