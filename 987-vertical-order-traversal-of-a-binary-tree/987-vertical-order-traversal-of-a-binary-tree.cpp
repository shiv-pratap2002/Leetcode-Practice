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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root) return ans;
        map<int,vector<pair<int,int>>>m;
        queue<pair<TreeNode *,pair<int,int>>>q;
        q.push({root,{0,0}});
        while(!q.empty())
        {
            TreeNode* u = q.front().first;
            int vert = q.front().second.first;
            int h = q.front().second.second;
            
            m[vert].push_back({h,u->val});
            q.pop();
            
            if(u->left)
            {
                q.push({u->left,{vert-1,h+1}});
            }
            
            if(u->right)
            {
                q.push({u->right,{vert+1,h+1}});
            }
        }
        for(auto i:m)
        {
            sort(i.second.begin(),i.second.end());
            vector<int>v;
            for(int j = 0;j<i.second.size();j++)
            {
                v.push_back((i.second)[j].second);
            }
            ans.push_back(v);
        }
        return ans;
    }
};