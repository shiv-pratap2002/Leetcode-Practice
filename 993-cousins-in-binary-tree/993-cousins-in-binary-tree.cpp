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

    void p(TreeNode* node, int val, int parent,int &m, TreeNode *&l,int lvl,int &ans)
{
    if (node == NULL)return;
 
    // If current node is the required node
    if (node->val == val) {
        // Print its parent
        ans = lvl;
        l = node;
        m = parent;
        return;
    }
    else {
 
        // Recursive calls for the children
        // of the current node
        // Current node is now the new parent
        p(node->left, val, node->val,m,l,lvl+1,ans);
        p(node->right, val, node->val,m,l,lvl+1,ans);
    }
}
    bool isCousins(TreeNode* root, int x, int y) {
        TreeNode *l,*m;
        int la=-1,ma=-1;
        int lvl1=0,lvl2=0;
        p(root,x,-1,la,l,0,lvl1);p(root,y,-1,ma,m,0,lvl2);
        cout<<la<<' '<<ma<<'\n';
        cout<<l->val<<' '<<m->val<<'\n';
        if(la!=ma and lvl1==lvl2)
        {
            return true;
        }
        return false;
        
    }
};