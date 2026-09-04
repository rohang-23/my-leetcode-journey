class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts.size();
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            int maximum = 0;
            int m=accounts[i].size();
            for(int j=0;j<m;j++)
            {
                maximum += accounts[i][j];
            }
            ans = max(ans,maximum);
        }
        return ans;
    }
};