class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    unordered_set<int> set(nums.begin(),nums.end());
    int n=nums.size();
    int mxcount=0;
    unordered_map<int,int> vis;
    for(int i=0;i<n;i++)
    {
        int x=nums[i];
        if(set.count(x-1))continue;
        int count=0;
        int y=x;
        while(!vis[x] && set.count(x))
        {
            count++;
            x++;
        }
        mxcount=max(count,mxcount);
        vis[y]=1;
    }  
    return mxcount;  
    }
};