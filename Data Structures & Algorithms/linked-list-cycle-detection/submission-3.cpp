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
    bool hasCycle(ListNode* head) {
        vector<ListNode*>vec;
        if(head==NULL){
            return false;
        }else if(head->next==NULL){
            return false;
        }else{
            ListNode* temp1 = head;
            while(temp1->next!=NULL){
                vec.push_back(temp1);
                for(int i = 0;i<vec.size();i++){
                    if(vec[i]==temp1->next){
                        return true;
                    }
                }
                temp1=temp1->next;
            }
            return false;
            
            
        }


       
       
    }
};
