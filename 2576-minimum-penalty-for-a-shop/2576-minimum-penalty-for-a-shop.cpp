#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.length();
        vector<int> pre(n + 1, 0);
        vector<int> suff(n + 1, 0);

        for (int i = 0; i < n; i++) {
            pre[i + 1] = pre[i] + (customers[i] == 'N');
        }

        for (int i = n - 1; i >= 0; i--) {
            suff[i] = suff[i + 1] + (customers[i] == 'Y');
        }

        int minPen = n;
        for (int i = 0; i <= n; i++) {
            pre[i] = pre[i] + suff[i];
            minPen = min(minPen, pre[i]);
        }

        for (int i = 0; i <= n; i++) {
            if (pre[i] == minPen) return i;
        }
        return n;
    }
};
