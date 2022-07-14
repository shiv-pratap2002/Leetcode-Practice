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
     ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr)
        {
            return nullptr;
        }
        list<int>l;
        while(head!=nullptr)
        {
            l.push_back(head->val);
            head = head->next;
        }
        l.unique();
        int size = l.size();
        cout<<size<<'\n';
        ListNode*q = new ListNode(l.front());
        l.pop_front();
        ListNode*p = q;
        int i = 1;
        while(i<size)
        {
            ListNode*n = new ListNode(l.front());
            cout<<l.front()<<'\n';
            p->next = n;
            l.pop_front();
            i++;
            p = p->next;
        }
        return q;
    }
};