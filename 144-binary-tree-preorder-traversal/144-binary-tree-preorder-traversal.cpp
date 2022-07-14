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
    vector<int> an;
    void preor(TreeNode *root)
    {
        if(root==nullptr)
        {
            return;
        }
        an.push_back(root->val);
        preor(root->left);
        preor(root->right);
        
    }
    vector<int> preorderTraversal(TreeNode* root) {
        preor(root);
        return an;
    }
};