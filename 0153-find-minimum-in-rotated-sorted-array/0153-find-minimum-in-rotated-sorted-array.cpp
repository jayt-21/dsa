class Solution {
public:
    int findMin(vector<int>& nums) {
    int l=0;
    int r=nums.size()-1;
    int ans=1e9;
    if(nums[l]<nums[r])return nums[l];
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(nums[l]<=nums[mid])
        {
            ans=min(ans,nums[l]);
            l=mid+1;
        }
        else{
            //right half sorted
            ans=min(ans,nums[mid]);
            r=mid-1;
        }
    } 
    return ans;
    }
};