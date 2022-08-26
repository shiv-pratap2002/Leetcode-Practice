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
    int l=0;
    int minDepth(TreeNode* root) {
        if(!root) 
        {
            if(l==0) return 0;
            return INT_MAX-1;
        }
        l++;
        if(!root->left and !root->right) return 1;
        return min(1+minDepth(root->left),1+minDepth(root->right));
    }
};