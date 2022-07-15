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
    ListNode *detectCycle(ListNode *head) {
        int t = 0;
        while(head!=nullptr)
        {
            if(head->val == INT_MIN)
            {
                return head;
            }
            head->val = INT_MIN;
            head = head->next;
            t++;
        }
        return nullptr;
        
    }
};