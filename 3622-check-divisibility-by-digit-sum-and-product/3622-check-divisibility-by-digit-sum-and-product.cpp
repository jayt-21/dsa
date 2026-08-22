class Solution {
public:
    bool checkDivisibility(int n) {
    int prod=1;
    int sum=0;
    int v=n;
    while(n)
    {
        int d=n%10;
        n=n/10;
        sum+=d;
        prod*=d;
    }   
    return !(v%(sum+prod));
    }
};