class Solution {
public:
    string reversePrefix(string s, int k) {
        // in
        // while(k<s.length()){

        // }
        reverse(s.begin(),s.begin()+k);
        return s;
    }
};