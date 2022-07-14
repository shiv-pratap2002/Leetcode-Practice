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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==nullptr and l2==nullptr)
        {
            return nullptr;
        }
        else if(l1==nullptr and l2!=nullptr)
        {
            return l2;
        }
        else if(l1!=nullptr and l2==nullptr)
        {
            cout<<'w'<<'\n';
            return l1;
        }
        ListNode *n;
        vector<int>c;
        while(l1->next!=nullptr)
        {
            c.push_back(l1->val);
            l1=l1->next;
        }
        c.push_back(l1->val);
        for(int i:c)
        {
            cout<<i<<' ';
        }
        while(l2->next!=nullptr)
        {
            c.push_back(l2->val);
            l2=l2->next;
        }
        c.push_back(l2->val);
        for(int i:c)
        {
            cout<<i<<' ';
        }
        sort(c.begin(),c.end());
        int i = 1;
        ListNode *head = new ListNode(c[0]);
        ListNode *p = head;
        while(i<c.size())
        {
            n= new ListNode(c[i]);
            // ListNode *temp=head;
            head->next=n;
            head=head->next;
            i++;
        }
        return p;   
    }
};