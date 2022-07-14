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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *t=head;
        int u=0;
        while(t!=nullptr)
        {
            u++;
            t=t->next;
        }
        if(u<=1)
        {
            return nullptr;
        }
        if(u==n)
        {
            head=head->next;
            return head;
        }
        ListNode *p=head;
        for(int i=0;i<u-n-1;i++)
        {
            p=p->next;
        }
        p->next=p->next->next;
        return head;
    }
};