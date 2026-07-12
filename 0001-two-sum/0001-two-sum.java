class Solution {
    public int[] twoSum(int[] nums, int target) {
    HashMap<Integer,Integer> map = new HashMap<>();
    int n=nums.length;
    int [] ans=new int[2];
    for(int i=0;i<n;i++)
    {
        int d=target - nums[i];
        if(map.containsKey(d))
        {
            ans[0]=map.get(d);
            ans[1]=i;
            return ans;
        } 
        map.put(nums[i],i);
    }  
    return ans;  
    }
}