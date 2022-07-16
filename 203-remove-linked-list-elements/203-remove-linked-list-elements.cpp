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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head;
        ListNode*prev = head;
        if(temp == nullptr)
        {
            return nullptr;
        }
        if(temp!=nullptr and temp->val==val)
        {
            while(temp->val==val and temp->next!=nullptr)
            {
                temp = temp->next;
            }
            head = temp;
            if(temp->val==val)
            {
                head = temp->next;
            }
            
            
        }
        while(temp!=NULL and temp->next!=NULL)
        {
            prev = temp;
            while(prev->next!=nullptr and (prev->next)->val==val)
            {
                prev->next = prev->next->next;
            }
            temp = temp->next;
        }
        if(temp!=nullptr)
        {
            cout<<temp->val<<'\n';
        }
        if(temp!=nullptr and temp->val==val)
        {
            temp = nullptr;
        }
        return head;
    }
};