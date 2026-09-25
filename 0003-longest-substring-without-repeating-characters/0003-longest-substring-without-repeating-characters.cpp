class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int st=0;
    unordered_map<char,int> map;
    int mxl=0;
    for(int i=0;i<s.size();i++)
    {
        if(!map.count(s[i]) || map[s[i]]<st)
        {
        mxl=max(mxl,i-st+1);
        }
        else st=map[s[i]]+1;
        map[s[i]]=i;
    } 
    return mxl;   
    }
};