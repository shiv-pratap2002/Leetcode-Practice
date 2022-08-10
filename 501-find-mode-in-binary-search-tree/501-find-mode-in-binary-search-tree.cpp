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
    map<int,int>m;
    void dfs(TreeNode *r)
    {
        if(!r) return;
        queue<TreeNode *>q;
        q.push(r);
        while(!q.empty())
        {
            TreeNode *t = q.front();
            m[t->val]++;
            q.pop();
            if(t->left) q.push(t->left);
            if(t->right) q.push(t->right);
            
        }
        
    }
    
    vector<int> findMode(TreeNode* root) {
        dfs(root);
        vector<int>p;
        int y=INT_MIN;
        for(auto i:m)
        {
            y = max(y,i.second);
        }
        for(auto i:m)
        {
            if(i.second==y)
            {
                p.push_back(i.first);
            }
        }
        return p;
    }
};