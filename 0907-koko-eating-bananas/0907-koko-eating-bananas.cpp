class Solution {
public:
    bool check(int speed, vector<int> piles, int h) {
        int count = 0;
        int n = piles.size();
        if(count>h) return false;
         for (int i = 0; i < n; i++) {
            if(count>h) return false;
            // if (speed >= piles[i]) {
            //     count++;
            // } else if (piles[i] % speed == 0) {
            //     count += piles[i] / speed;
            // } else {
            //     count += (piles[i] / speed) + 1;
            // }
            //ceiling divison method
            count +=(piles[i]+speed-1)/speed;
        }
        if (count > h)
            return false;
        else
            return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size(); int mx = -1;
        for (int i = 0; i < n; i++) {
            mx = max(mx, piles[i]);
        }
        int low = 1;
        int high = mx;
        int ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (check(mid, piles, h) == true) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};