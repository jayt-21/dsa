class Solution {
public:
    int cnt=0;
    vector<vector<int>> dp;
    int trav(int i,string&s,int j,string&t)
    {
        int n=s.size();
        
        if(j==t.size())return 1;
        if(i>=n || j>=t.size())return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        //take don't take
        int ans =trav(i+1,s,j,t);
        if(s[i]==t[j])ans+=trav(i+1,s,j+1,t);
        return dp[i][j]=ans;
    }
    int numDistinct(string s, string t) {
    dp=vector<vector<int>> (1001,vector<int>(1001,-1));
    return trav(0,s,0,t);   
    }
};