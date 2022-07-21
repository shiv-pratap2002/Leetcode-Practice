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
    vector<int>v;
    unordered_map<int,int>m;
    void inorder(TreeNode *r)
    {
        if(r==nullptr)
        {
            return;
        }
        inorder(r->left);
        v.push_back(r->val);
        inorder(r->right);
        
    }
    
    void inorder_new(TreeNode *r)
    {
        if(r==nullptr)
        {
            return;
        }
        inorder_new(r->left);
        r->val = m[r->val];
        inorder_new(r->right);
    }
    TreeNode* convertBST(TreeNode* root) {
        if(root==nullptr)
        {
            return root;
        }
        inorder(root);
        reverse(v.begin(),v.end());
        vector<int>sum(v.size());
        sum[0] = v[0];
        m[v[0]] = sum[0];
        for(int i=1;i<v.size();i++)
        {
            sum[i] = sum[i-1] + v[i];
            m[v[i]] = sum[i];
            
        }
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<' '<<sum[i]<<'\n';
        }
        inorder_new(root);
        return root;
    }
};