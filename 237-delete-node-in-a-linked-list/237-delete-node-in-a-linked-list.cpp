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
    void deleteNode(ListNode* node) {
        ListNode *t;
        while(node->next)
        {
            node->val = node->next->val;
            if(!node->next->next)
            {
                t = node;
            }
            node = node->next;
        }
        t->next=nullptr;
    }
};