class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end(), [](int a, int b) {
            return abs(a) < abs(b);
        });

        int i = 0, j = n - 1;
        long long ans = 0;

        while (i < j) {
            ans -= 1LL * nums[i] * nums[i];
            ans += 1LL * nums[j] * nums[j];

            i++;
            j--;
        }

        if (i == j) {
            ans += 1LL * nums[j] * nums[j];  // NOT ans += ans += ...
        }

        return ans;
    }
};