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
    int preorder(TreeNode *m,int cur)
    {
        if(!m) return 0;
        cur=10*cur + m->val;
        if(!m->left and !m->right)
        {
            return cur;
        }
        return preorder(m->left,cur) + preorder(m->right,cur);
    }
    int sumNumbers(TreeNode* root) {
        return preorder(root,0);
    }
};