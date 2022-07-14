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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>c;
        stack<TreeNode*>p;
        TreeNode* pro = root;
        while(pro!=nullptr or p.empty()==false)
        {
            while(pro!=nullptr)
            {
                p.push(pro);
                pro = pro->left;
            }
            pro = p.top();
            p.pop();
            c.push_back(pro->val);
            pro = pro->right;
        }
        return c;
        
    }
};