/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
     vector<vector<int>>qo;
    void q(Node *root,int l)
    {
        if(root==nullptr)
        {
            return;
        }
        if(l==qo.size())
        {
            qo.push_back({});
        }
        qo[l].push_back(root->val);
        for(int i = 0 ; i < root->children.size();i++)
        {
            q(root->children[i],l+1);
        }
    }
    vector<vector<int>> levelOrder(Node* root) {
        q(root,0);
        return qo;
    }
};