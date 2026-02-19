class Solution {
public:
    string minWindow(string s, string t) {
        int m = s.length();
        int n = t.length();
        int i = 0;
        int j = 0;
        int start = 0;
        int count = t.length();
        int minlen = INT_MAX;

        unordered_map<char, int> mp;
        for (char c : t)
            mp[c]++;

        while (j < m) {
            if (mp[s[j]] > 0) {
                count--;
            }
            mp[s[j]]--;

            while (count == 0) {

                if (j - i + 1 < minlen) {
                    minlen = j - i + 1;
                    start = i;
                }

                mp[s[i]]++;

                if (mp[s[i]] > 0)
                    count++;
                i++;
            }
            j++;
        }

        if (minlen == INT_MAX)
            return "";
        return s.substr(start, minlen);
    }
};

