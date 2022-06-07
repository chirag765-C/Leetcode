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
        ListNode*slow;
        ListNode*fast;
    bool hascycle(ListNode*head){
        slow=head;
      fast=head;
        while(fast && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return true;
            }
          
        }
          return false;
    }
    ListNode*tofind(ListNode*head,int cnt){
        while(head!=slow){
            head=head->next;
            slow=slow->next;
         cnt++;   
        }
        return head;
    }
    ListNode *detectCycle(ListNode *head) {
     if(!head){
         return NULL;
     }
        ListNode*newhead=head;
         ListNode*t=new ListNode();
        if(hascycle(head)){
        t=tofind(newhead,0);
        }
        else{
        return NULL;
        }
        return t;
    }
};