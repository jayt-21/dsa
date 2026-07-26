class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int t) {
    int l=0;
    int n=mat.size(),m=mat[0].size();
    int r=(m*n)-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        //get the indices
        int col=mid%m;
        int row=mid/m;
        if(mat[row][col]==t)return 1;
        else if(mat[row][col]<t)l=mid+1;
        else r=mid-1;
    }
    return 0;
    }
};