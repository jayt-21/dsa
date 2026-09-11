/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int count=0;
pair<int,int> trav(TreeNode*root)
{
    if(!root)return {0,0};
    auto left =trav(root->left);
    auto right =trav(root->right);
    int cnt=1;
    int sum=root->val;
    if(left.first){
        sum+=left.second;
        cnt+=left.first;
    }
    if(right.first)
    {
        sum+=right.second;
        cnt+=right.first;
    }
    if(sum/cnt==root->val)count++;
    return {cnt,sum};
    
}
    int averageOfSubtree(TreeNode* root) {
    trav(root);
    return count;    
    }
};