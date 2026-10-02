class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
    unordered_map<int,int> map;
    for(auto x:jewels)map[x]++;
    int cnt=0;
    for(auto x:stones)if(map.count(x))cnt++;
    return cnt;   
    }
};