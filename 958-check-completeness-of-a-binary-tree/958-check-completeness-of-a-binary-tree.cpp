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
    bool isCompleteTree(TreeNode* root) {
        if(root==nullptr)
        {
            return false;
        }
        bool f=false;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* r = q.front();
            q.pop();
            if(r==nullptr)
            {
                f=true;
            }
            else
            {
                if(f)
                {
                    return false;
                }
                q.push(r->left);
                q.push(r->right);
            }
        }
        return true;
    }
};