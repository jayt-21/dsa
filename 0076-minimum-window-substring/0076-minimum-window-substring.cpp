class Solution {
public:
    string minWindow(string s, string t) {
    unordered_map<char,int> have;
    for(auto x:t)have[x]++;
    int count=t.size();
    int i=0,j=0;
    int mn=s.size();
    int st=-1,end=-1;
    while(j<s.size())
    {
    char c=s[j];
    if(have.count(c))
    {
        if(have[c]>0)count--;
        have[c]--;
    }
    while(count<=0)
    {
    //shrink the win
    if(j-i+1 <= mn) {
    mn = j-i+1;
    st = i;
}
    char p=s[i];
    if(have.count(p))
    {
        if(have[p]>=0)count++;
        have[p]++;
    }
    i++;
    }
    //expand
    j++;
    }  
    if(st==-1)return "";
    return s.substr(st,mn);  
    }
};