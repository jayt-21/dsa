class Solution {
public:
    int trap(vector<int>& height) {
    int n=height.size();
    vector<int> left(n,-1);
    int mxl=0,mxr=0;
    for(int i=0;i<n;i++)
    {
    left[i]=mxl;
    mxl=max(height[i],mxl);   
    }
    int ans=0;
    for(int i=n-1;i>=0;i--){
    ans+= max(0,min(left[i],mxr)-height[i]);    
    mxr=max(mxr,height[i]);
    }
    return ans;
    }
};