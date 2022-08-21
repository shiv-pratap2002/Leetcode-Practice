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
    int height(TreeNode* p)
    {
        if(p==nullptr)
        {
            return 0;
        }
        else
        {
            return 1+max(height(p->left),height(p->right));
        }
    }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(height(p)!=height(q))
        {
            return false;
        }
        if(p==nullptr and q==nullptr)
        {
            return true;
        }
        if((p->val)!=(q->val))
        {
            return false;
        }
        else
        {
            return isSameTree(p->left,q->right) and isSameTree(p->right,q->left);
        }
    }
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return isSameTree(root->left,root->right);
    }
};