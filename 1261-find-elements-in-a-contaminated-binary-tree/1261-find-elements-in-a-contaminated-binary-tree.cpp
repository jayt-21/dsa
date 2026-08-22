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
class FindElements {
public:
TreeNode*root;
void purify(TreeNode*root,int val)
{
    if(!root)return ;
    root->val=val;
    purify(root->left,val*2+1);
    purify(root->right,val*2+2);
}
    FindElements(TreeNode* root) {
    this->root=root;
    if(root->val==-1)
    {
        //contaminated 
        root->val=0;
        purify(root,0);
    }    
    }
    
    bool findt(TreeNode*root,int &t)
    {
    if(!root)return false;
    return root->val==t || findt(root->left,t ) || findt(root->right,t);
    }

    bool find(int target) {
    return findt(root,target);    
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */