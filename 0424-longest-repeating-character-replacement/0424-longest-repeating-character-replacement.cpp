class Solution {
public:
    int characterReplacement(string s, int k) {
    unordered_map<char,int> map;
    int i=0;
    int j=0;
    int maxi=0;
    int mxl=1;
    while(j<s.size())
    {
        char ch=s[j];
        map[ch]++;
        if(map[ch]>maxi)
        {
            maxi=map[ch];
        }
        int l=j-i+1;
        if(maxi+k>=l)
        {
        mxl=max(mxl,l);   
        }
        else
        {
            //shrink
                char x=s[i];
                map[x]--;
                i++;
        }
        j++;
    }
    return mxl;
    }
};