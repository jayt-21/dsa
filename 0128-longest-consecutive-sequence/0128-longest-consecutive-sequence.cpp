class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    unordered_set<int> set(nums.begin(),nums.end());
    int mxl=0;
    for(auto x:set)
    {
        int prev = x-1;
        if(set.count(prev))continue;
        int l=0;
        while(set.count(x))
        {
            x++;
            l++;
        }
        mxl=max(mxl,l);
    }    
    return mxl;
    }
};