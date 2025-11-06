class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        unordered_set<int> primes;

        for (int x : nums) {
            int num = x;
            if (num % 2 == 0) {
                primes.insert(2);
                while (num % 2 == 0) num /= 2;
            }
            for (int i = 3; i * i <= num; i += 2) {
                if (num % i == 0) {
                    primes.insert(i);
                    while (num % i == 0) num /= i;
                }
            }
            if (num > 1) primes.insert(num);
        }

        return primes.size();
    }
};
