class Solution {
public:
    int maxScore(vector<int>& c, int k) {
    //min n-k sum window
    int n=c.size();
    k=n-k;
    int mini=1e9;
    int sum=0;
    int total=0;
    int i=0,j=0;
    while(j<n)
    {
        sum+=c[j];
        total+=c[j];
        if(j>=k-1){
            mini=min(sum,mini);
            sum-=c[i++];
        }
        
        j++;
    }
    if(k==0)return total;
    return total -mini;
    }
};