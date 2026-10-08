class Solution {
public:

    int solve(vector<int>&m)
    {
    int n=m.size();
    vector<int> dp(n,0);
    dp[0]=m[0];
    dp[1]=max(dp[0],m[1]);
    for(int i=2;i<n;i++)
    {
        dp[i]=max(dp[i-1],dp[i-2]+m[i]);
    }
    return dp[n-1];
    }

    int rob(vector<int>& nums) {
    vector<int> f,l;
    int n=nums.size();
    if(n==1)return nums[0];
    if(n==2) return max(nums[0],nums[1]);
    for(int i=0;i<n;i++)
    {
    if(i!=0)l.push_back(nums[i]);
    if(i!=n-1)f.push_back(nums[i]);
    }    
    return max(solve(l),solve(f));
    }
};