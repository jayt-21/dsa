class Solution {
public:
    int characterReplacement(string s, int k) {
    int maxi=0,st=0,mxl=0;
    int n=s.size();
    unordered_map<char,int> map;
    for(int i=0;i<n;i++)
    {
    map[s[i]]++;
    maxi=max(maxi,map[s[i]]);
    int win=i-st+1;
    while(maxi+k<win)
    {
        map[s[st]]--;
        st++;
        win=i-st+1;
    }
    mxl=max(mxl,win);
    } 
    return mxl;   
    }
};