class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        if (n == 0) return k;

        vector<int> missing;
        int count = 0;
        int i = 1;

        while (missing.size() < k) 
        {
            int flag = 0;

            for (int j = 0; j < n; j++) {
                flag = 0;
                if (arr[j] != i) {
                    flag = 1;
                } else {
                    flag = 0;
                    break;
                }
            }

            if (flag == 1)
                missing.push_back(i);

            i++;
        }

        return missing[k - 1];
    }
};