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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *p = new ListNode();
        ListNode *ans = p;
        int carry = 0;
        while(l1 and l2)
        {
            ListNode *q = new ListNode();
            q->val = l1->val+l2->val+carry;
            
            if(q->val>=10)
            {
                carry = 1;
                q->val %= 10;
            }
            else{
                carry=0;
            }
            cout<<q->val<<' ';
            
            p->next = q;
            p = p->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1){
            int val = l1->val+carry;
            if(val>=10)
            {
                val%=10;
                carry=1;
            }
            else{
                carry=0;
            }
            ListNode *q = new ListNode(val);
            p->next = q;
            p=p->next;
            l1 = l1->next;
        }
        while(l2)
        {
            int val = l2->val+carry;
            if(val>=10)
            {
                val%=10;
                carry=1;
            }
            else{
                carry=0;
            }
            ListNode *q = new ListNode(val);
            p->next = q;
            p=p->next;
            l2 = l2->next;
        }
        if(carry)
        {
            ListNode *q = new ListNode(carry);
            p->next =  q;
        }
        ListNode *l = ans;
        return ans->next;
    }
};