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
       
  ListNode*temp=head;
        ListNode*head1=new ListNode(-1),*head2=new ListNode(-1),*t1,*t2;
       
      t1=head1;
        t2=head2;
        while(temp!=NULL){
            if(temp->val<x){
             
              
                t1->next=temp;
                t1=t1->next;
                
            }
            else{
               
                t2->next=temp;
                t2=t2->next;
                
            }
            temp=temp->next;
            
        }
        t1->next=head2->next;
        t2->next=NULL;
        return head1->next;
    }
};