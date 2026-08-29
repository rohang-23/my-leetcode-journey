class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int curr_profit = 0;
        int max_profit = 0;
        for (int i = 1; i < n; i++) {
            int diff = prices[i] - prices[i - 1];

            curr_profit += diff;
            if (curr_profit > max_profit) {
                max_profit = curr_profit;
            } else if (curr_profit < 0) {
                curr_profit = 0;
            }
        }
        return max_profit;
    }
};