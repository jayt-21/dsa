class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;

        if (n >= 1000000000000000LL) {
            ans += 5;
            n = 999999999999999LL;
        }

        if (n >= 1000000000000LL) {
            ans += (n - 1000000000000LL + 1) * 4;
            n = 999999999999LL;
        }

        if (n >= 1000000000LL) {
            ans += (n - 1000000000LL + 1) * 3;
            n = 999999999LL;
        }

        if (n >= 1000000LL) {
            ans += (n - 1000000LL + 1) * 2;
            n = 999999LL;
        }

        if (n >= 1000LL) {
            ans += (n - 1000LL + 1);
        }

        return ans;
    }
};