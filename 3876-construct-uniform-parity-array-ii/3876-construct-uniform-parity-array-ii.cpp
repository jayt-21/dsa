class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
    int allev=1,allod=1,mini=INT_MAX;
    for(auto x:nums1)
    {
        if(x%2)allev=0;
        else allod=0;
        mini=min(x,mini);
    } 
    return (allev || allod || mini%2);   
    }
};