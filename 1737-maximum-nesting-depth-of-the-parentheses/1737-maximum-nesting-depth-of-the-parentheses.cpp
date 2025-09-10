class Solution {
public:
    int maxDepth(string s) {
        int curr=0;
        int max=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                curr++;
                if(curr>max){
                    max = curr;
                }
            }
            else if(s[i]==')'){
                curr--;
            }
        }
        return max;
    }
};