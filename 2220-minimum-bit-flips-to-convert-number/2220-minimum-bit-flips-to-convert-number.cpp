class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count = 0;
        int ans = start ^ goal;
        // while(ans!=0){
        //     ans = ans & (ans-1);
        //     count++;
        // }
       count = __builtin_popcount(ans);
        return count;
    }
};