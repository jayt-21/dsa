class Solution {
    public List<String> summaryRanges(int[] nums) {
    int n=nums.length;
    List<String> s=new ArrayList<>();
    int i=0;
    while(i<n)
    {
        int st=i;
        while(i<n-1 && nums[i+1]==nums[i]+1)i++;
        if(i-st==0)s.add(Integer.toString(nums[i]));
        else s.add(Integer.toString(nums[st])+"->"+Integer.toString(nums[i]));
        i++;
    }   
    return s;
    }
}