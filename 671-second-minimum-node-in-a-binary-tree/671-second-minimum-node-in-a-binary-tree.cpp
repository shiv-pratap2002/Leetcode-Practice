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
    void in(TreeNode *r)
    {
        if(r==nullptr)
        {
            return;
        }
        in(r->left);
        v.push_back(r->val);
        in(r->right);
    }
    int findSecondMinimumValue(TreeNode* r) 
    {
       if(r==nullptr)
       {
           return -1;
       }
        in(r);
        sort(v.begin(),v.end());
        vector<int>:: iterator u = unique(v.begin(),v.end());
        v.resize(std::distance(v.begin(), u));
        if(v.size()==1)
        {
            return -1;
        }
        return v[1];
    }
};