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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int>v;
        ListNode* t = head;
        while(t!=nullptr)
        {
            v.push_back(t->val);
            t=t->next;
        }
        reverse(v.begin()+left-1,v.begin()+right);
        ListNode *p = new ListNode();
        ListNode* l = p;
        for(int i=0;i<v.size();i++)
        {
            ListNode *n = new ListNode(v[i]);
            p->next = n;
            p=p->next;
        }
        return l->next;
    }
};