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
    ListNode*rev(ListNode*head)
    {
        ListNode*prev=nullptr;
        ListNode*curr=head;
        while(curr)
        {
            ListNode*next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
    if(!head)return ;
    ListNode*slow =head;
    ListNode*fast=head;
    while(fast && fast->next)
    {
        slow =slow->next;
        fast=fast->next->next;
    }  
    fast=slow->next;
    slow->next=nullptr;
    slow=head;
    fast=rev(fast);
    while(fast)  
    {
        ListNode*snext=slow->next;
        ListNode*fnext=fast->next;
        slow->next=fast;
        fast->next=snext;
        slow=snext;
        fast=fnext;
    }
    }
};