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
    vector<vector<int>>ans;
    void bfl(TreeNode *root, vector<vector<int>>&ans,int level)
    {
        if(root==nullptr)
        {
            return;
        }
        if(level==ans.size())
        {
            ans.push_back({});
        }
        ans[level].push_back(root->val);
        bfl(root->left,ans,level+1);
        bfl(root->right,ans,level+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        bfl(root,ans,0);
        return ans;
    }
};