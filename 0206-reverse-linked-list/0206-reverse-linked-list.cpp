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
ListNode* rev(ListNode*&head,ListNode*curr,ListNode*prev)
{
    if(!curr)
    {
        head=prev;
        return nullptr;;
    }
    rev(head,curr->next,curr);
    curr->next=prev;
    return curr;
}
    ListNode* reverseList(ListNode* head) {
    rev(head,head,nullptr);
    return head;
    }
};