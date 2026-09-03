class Solution {
public:
    bool uniformArray(vector<int>& nums) {
    int allev=1,allod=1,mini=INT_MAX;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
    if(nums[i]%2)
    {
    allev=0;
    }
    else{
    allod=0;
    }
        mini=min(mini,nums[i]);
    }

    if(allev || allod)return true;
    if(mini%2==0)return false;
    return true;
    }
};