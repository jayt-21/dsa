class Solution {
    int gcd(int a,int b)
    {
        if(b==0 || a==0)return a;
        if(a==1 || b==1)return 1;
        return gcd(b,a%b);
    }
    public int findGCD(int[] nums) {
    int mini=Integer.MAX_VALUE;
    int maxi=Integer.MIN_VALUE;
    for(int i=0;i<nums.length;i++)
    {
        if(mini>nums[i])mini=nums[i];
        if(maxi<nums[i])maxi=nums[i];
    }    
    return gcd(maxi,mini);
    }
}