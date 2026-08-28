class Solution {
public:
    string frequencySort(string s) {
    unordered_map<char,int> freq;
    for(auto x:s)
    {
        freq[x]++;
    }  
    vector<pair<int,char>> v;
    for(auto [x,y]:freq)
    {
        v.push_back({y,x});
    }
    sort(v.rbegin(),v.rend());
    string ans;
    for(auto [x,y]:v)
    {
        ans+=string(x,y);
    }
    return ans;
    }
};