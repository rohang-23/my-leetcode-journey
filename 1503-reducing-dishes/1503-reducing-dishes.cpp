class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n = satisfaction.size();
        sort(satisfaction.begin(), satisfaction.end());
        vector<int> suffix(n);
        int sum = 0;
        suffix[n - 1] = satisfaction[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = satisfaction[i] + suffix[i + 1];
        }
        int idx=0;
        for (int i = 0; i < n; i++) {
            if (suffix[i] > 0) {
                idx=1;
                sum += suffix[i]*idx;
                idx++;
            }
        }
        return sum;
    }
};