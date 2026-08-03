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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL){
            return list2;
        }else if(list2==NULL){
            return list1;
        }else{
            ListNode* sortedList = list1;
            ListNode* temp1=sortedList;
            while(temp1->next!=NULL){
                temp1 = temp1->next;
        }
            temp1->next = list2;
            temp1 = sortedList;
            int count = 1;
            while(temp1->next!=NULL){
                    temp1=temp1->next;
                    ++count;
            }
            temp1 = sortedList;
            vector<int>vec;
            while(temp1->next!=NULL){
                    vec.push_back(temp1->val);
                    temp1=temp1->next;
            }
            vec.push_back(temp1->val);
            sort(vec.begin(),vec.end());

            temp1 = sortedList;
                for(int i = 0;i<vec.size();i++){
                    temp1->val  = vec[i];
                    temp1 = temp1->next;
                }
                
                return sortedList;


            }
        



    }
};
