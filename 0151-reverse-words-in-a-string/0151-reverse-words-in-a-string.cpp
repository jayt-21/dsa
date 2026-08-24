class Solution {
public:
    string reverseWords(string s) {
    vector<string> v;
    string part="";
    for(auto x:s)
    {
        if(x==' ')
        {
            if(part!="")v.push_back(part);
            part="";
        }
        else part.push_back(x);
    }    
   if(part!="") v.push_back(part);
    //now reverse and then join
    
    reverse(v.begin(),v.end());
    //join
    string ans;
    for(auto x:v)
    {
        ans+=x;
        ans.push_back(' ');
    }
    ans.pop_back();
    return ans;
    }
};