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
    bool dfs(TreeNode *r,long max,long min)
    {
        if(!r) return true;
        if(r->val>=max or r->val<=min) return false;
        return dfs(r->left,r->val,min) and dfs(r->right,max,r->val);
    }
    bool isValidBST(TreeNode* root)
    {
        return dfs(root,LONG_MAX,LONG_MIN);
    }
};