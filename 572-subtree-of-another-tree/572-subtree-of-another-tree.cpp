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
     bool sametree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL or subRoot==NULL)
        {
            return root==NULL and subRoot==NULL;
        }
        else if(root->val==subRoot->val)
        {
            return (sametree(root->left,subRoot->left) and sametree(root->right,subRoot->right));
        }
        else
        {
            return false;
        }
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL)
        {
            return false;
        }
        else if(sametree(root,subRoot))
        {
            return true;
        }
        else
        {
            return isSubtree(root->left,subRoot) or isSubtree(root->right,subRoot);
        }
    }
};