class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = 0;
        int n = candies.size();
        for(int i=0;i<n;i++)
        {
            if(candies[i]>max)
            {
                max = candies[i];
            }
        }
        int req = max-extraCandies;
        vector<bool> result(n,false);
        for(int i=0;i<n;i++)
        {
            if(candies[i]>=req)
            {
                result[i]=true;
            }
        }
        return result;
    }
};