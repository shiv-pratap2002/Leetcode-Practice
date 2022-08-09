/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool recurse(TreeNode *root, TreeNode *p,TreeNode *q,TreeNode *&ans)
    {
        if(!root)
        {
            return false;
        }
        int l = recurse(root->left,p,q,ans)?1:0;
        int r = recurse(root->right,p,q,ans)?1:0;
        int mid = ((root==p) or (root==q)) ? 1:0;
        if(mid + l + r >= 2) ans = root;
        return (mid + l + r) > 0;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode *ans;
        recurse(root,p,q,ans);
        return ans;
    }
};