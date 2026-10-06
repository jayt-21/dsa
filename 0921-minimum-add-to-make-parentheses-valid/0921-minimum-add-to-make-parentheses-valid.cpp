class Solution {
public:
    int minAddToMakeValid(string s) {
    int open=0;
    int cnt=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')open++;
        else open--;
        if(open<0){
            cnt++;
            open=0;
        }
    }
    return cnt+open;
    }
};