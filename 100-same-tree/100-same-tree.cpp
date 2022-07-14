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
    int height(TreeNode* p)
    {
        if(p==nullptr)
        {
            return 0;
        }
        else
        {
            return 1+max(height(p->left),height(p->right));
        }
    }
    vector<int> lvl_order(TreeNode *r)
    {
    vector<int>c(height(r),0);
    if(r==NULL)
    {
        return c;
    }
    queue<TreeNode *>q;
    q.push(r);    
    c.push_back(r->val);
    while(true)
    {
        int n=q.size();
        if(n==0)
        {
            return c;
        }
        while(n>0)
        {
            TreeNode *p=q.front();
            q.pop();
            if(p->left==nullptr or p->right==nullptr)
            {
                c.push_back(-1);
            }
            if(p->left!=NULL)
            {
                q.push(p->left);
                c.push_back((p->left)->val);

            }
            if(p->right!=NULL)
            {
                q.push(p->right);
                c.push_back((p->right)->val);
            }
            n--;
        }
        
    }
    
}
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(height(p)!=height(q))
        {
            return false;
        }
        if(p==nullptr and q==nullptr)
        {
            return true;
        }
        if((p->val)!=(q->val))
        {
            return false;
        }
        else
        {
            return isSameTree(p->left,q->left) and isSameTree(p->right,q->right);
        }
        // vector<int>l = lvl_order(p);
        // vector<int>d = lvl_order(q);
        // if(l.size()!=d.size())
        // {
        //     return false;
        // }
        // else
        // {
        //     for(int i=0;i<l.size();i++)
        //     {
        //         if(l[i]!=d[i])
        //         {
        //             return false;
        //         }
        //     }
        //     return true;
        // }
    }
};