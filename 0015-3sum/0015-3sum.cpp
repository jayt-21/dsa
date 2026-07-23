class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for (int k = 0; k < n - 2; k++) {
            if (k > 0 && nums[k] == nums[k - 1])
                continue;

            int i = k + 1, j = n - 1;

            while (i < j) {
                int t = nums[k] + nums[i] + nums[j];

                if (t == 0) {
                    ans.push_back({nums[k], nums[i], nums[j]});
                    i++;
                    j--;

                    while (i < j && nums[i] == nums[i - 1])
                        i++;
                    while (i < j && nums[j] == nums[j + 1])
                        j--;
                }
                else if (t < 0) {
                    i++;
                }
                else {
                    j--;
                }
            }
        }

        return ans;
    }
};