class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int best=0;
    int cmin=prices[0];
    for(int i=1;i<prices.size();i++)
    {
        best=max(best,prices[i]-cmin);
        cmin=min(prices[i],cmin);
    }    
    return best;
    }
};