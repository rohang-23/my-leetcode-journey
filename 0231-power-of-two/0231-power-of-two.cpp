#include<cmath>
class Solution {
public:
    bool isPowerOfTwo(int n) {
       if(n==1) return true;
       if(n<=0) return false;
        // if(n%2==0 && (n/2)%2==0) return true;
        // else return false;
        for(;n>1;){
            if(n%2!=0){
                return false;
            }
            else {
                n/=2;
            }
        }
        return true;
    }
};