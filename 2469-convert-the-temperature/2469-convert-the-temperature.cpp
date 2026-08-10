class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;
        // ans.push_back(celsius+273.15);
        // ans.push_back(celsius*1.80 + 32.00);
        // return ans;
        return {celsius+273.15,celsius*1.80 + 32.00};
    }
};