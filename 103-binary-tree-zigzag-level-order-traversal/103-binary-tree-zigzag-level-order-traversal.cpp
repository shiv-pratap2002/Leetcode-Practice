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
    void bfs(TreeNode *a, int level)
    {
        if(!a) return;
        if(level==ans.size()) ans.push_back({});
        ans[level].push_back(a->val);
        bfs(a->left,level+1);
        bfs(a->right,level+1);
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        bfs(root,0);
        for(int i=0;i<ans.size();i++)
        {
            if(i%2)
            {
                reverse(ans[i].begin(),ans[i].end());
            }
        }
        return ans;
    }
};