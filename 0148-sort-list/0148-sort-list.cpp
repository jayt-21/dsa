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
ListNode*merge(ListNode*a,ListNode*b)
{
   ListNode*ans=new ListNode(-1);
   ListNode*dum=ans;
   while(a && b)
   {
    int x = 0;
    if(a->val >b->val)
    {
        x=b->val;
        b=b->next;
    }
    else
    {
        x=a->val;
        a=a->next;
    }
    ListNode* nxt=new ListNode(x);
    dum->next=nxt;
    dum=dum->next;
   } 
   while(a)
   {
    ListNode* nxt=new ListNode(a->val);
    a=a->next;
    dum->next=nxt;
    dum=dum->next;
   }
   while(b)
   {
    ListNode* nxt=new ListNode(b->val);
    b=b->next;
    dum->next=nxt;
    dum=dum->next;
   }
   return ans->next;
}
    ListNode*sort(ListNode*head)
    {
        if(!head)return nullptr;
        if(!head->next)return head;
        ListNode*slow=head;
        ListNode*fast=head->next;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*first=head;
        ListNode*second=slow->next;
        slow->next=nullptr;
        first=sort(first);
        second=sort(second);
        return merge(first,second);
        
    }
    ListNode* sortList(ListNode* head) {
    if(!head)return nullptr;  
    return sort(head); 
    }
};