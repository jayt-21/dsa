class Solution {
public:
    int maximumLengthSubstring(string s) {
    int i=0,j=0;
    vector<int> map(26,0);
    int n=s.length();
    int mxl=0;
    while(j<n)
    {
        int dx=s[j]-'a';
        while(i<j && map[dx]>=2)
        {
        int id=s[i]-'a';
        map[id]--;
        i++;
        }
        map[dx]++;
        mxl = max(mxl,j-i+1);
        j++;
    }  
    return mxl; 
    }
};