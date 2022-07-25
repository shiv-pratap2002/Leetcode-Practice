/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
         vector<int>v;
        ListNode *p = head;
        while(p!=nullptr)
        {
            v.push_back(p->val);
            p=p->next;
        }
        cout<<v[k-1]<<' '<<v[v.size()-k];
        swap(v[k-1],v[v.size()-k]);
        
        ListNode *e = new ListNode(v[0]);
        ListNode *g = e;
        for(int i=1;i<v.size();i++)
        {
            ListNode *f = new ListNode(v[i]);
            e->next = f;
            e=e->next;
        }
        return g;
    }
};