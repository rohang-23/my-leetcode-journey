#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> result;
        if(s.empty() || words.empty()) return result;

        int wordLen = words[0].length();
        int wordCount = words.size();
        int totalLen = wordLen * wordCount;

        unordered_map<string,int> wordFreq;
        for(string w : words)
            wordFreq[w]++;

        for(int i = 0; i < wordLen; i++) {

            int left = i;
            int count = 0;
            unordered_map<string,int> currentFreq;

            for(int j = i; j + wordLen <= s.length(); j += wordLen) {

                string word = s.substr(j, wordLen);

                if(wordFreq.find(word) != wordFreq.end()) {

                    currentFreq[word]++;
                    count++;

                    while(currentFreq[word] > wordFreq[word]) {
                        string leftWord = s.substr(left, wordLen);
                        currentFreq[leftWord]--;
                        left += wordLen;
                        count--;
                    }

                    if(count == wordCount) {
                        result.push_back(left);
                    }

                } else {
                    currentFreq.clear();
                    count = 0;
                    left = j + wordLen;
                }
            }
        }

        return result;
    }
};