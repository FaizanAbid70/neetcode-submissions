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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL){
            return head;
        }
        else if(head->next==NULL){
            return head;
        }else{
            ListNode *temp1,*temp2,*temp3;
            temp1 = head;
            temp2 = temp1->next;
            temp1->next = NULL;
            temp3 = temp1;
            temp1 = temp2;
            while(temp1->next!=NULL){
                temp2 = temp1->next;
                temp1->next = temp3;
                temp3 = temp1;
                temp1 = temp2;
            }
            temp1->next = temp3;
            head = temp1;
            return head;
        }
    }
};
