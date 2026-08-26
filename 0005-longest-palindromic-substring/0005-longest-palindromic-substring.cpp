class Solution {
public:
    string longestPalindrome(string s) {
    int mxl=0;
    string res;
    int n=s.size();  
    for(int i=0;i<n;i++)
    {
        int l=i-1;
        int r=i+1;
        while(r<n && s[i]==s[r])r++;
        while(l>=0 && r<n && s[l]==s[r])
        {
            l--;
            r++;
        }
        //get the length
        int len=r-l-1;
        if(len>mxl)
        {
            res=s.substr(l+1,len);
            mxl=len;
        }
    } 
    return res;
    }
};