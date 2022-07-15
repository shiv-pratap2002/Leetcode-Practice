/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
         ListNode *h = head;
        int i = 0;
        if(head==nullptr or head->next==nullptr)
        {
            return false;
        }
        while(head->next!=nullptr)
        {
            
            head = head->next;
            i++;
            if(i>pow(10,4))
            {
                return true;
            }
        }
        return false;
    }
};