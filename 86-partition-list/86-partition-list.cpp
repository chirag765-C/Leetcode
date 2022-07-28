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
    ListNode* partition(ListNode* head, int x) {
if(!head){
    return NULL;
}
        ListNode*head1=new ListNode(-1);
        ListNode*head2=new ListNode(-1);
        ListNode*t1=head1;
        ListNode*t2=head2;
        while(head){
            if(head->val<x){
                t1->next=head;
                t1=t1->next;
            }
            else{
                t2->next=head;
                t2=t2->next;
            }
            head=head->next;
        }
        t1->next=head2->next;
        t2->next=NULL;
        return head1->next;
    }
};