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
    void find(vector<vector<int>>&v,vector<int>&p,TreeNode *root,int targetSum)
    {
        if(!root) return;
        p.push_back(root->val);
        if(!root->left and !root->right and root->val==targetSum) 
            v.push_back(p);
        find(v,p,root->left,targetSum - root->val);
        find(v,p,root->right,targetSum - root->val);
        p.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>v;
        vector<int>p;
        find(v,p,root,targetSum);
        return v;
    }
};