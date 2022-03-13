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
        ListNode* ans = NULL;
        ListNode* cur = new ListNode();
        ListNode* prev = NULL;
        ans = cur;
        if(l1 == NULL && l2==NULL) 
            return NULL;
        while( (l1!=NULL) && (l2!=NULL) ){
            if(l1->val> l2->val){
             cur->val = l2->val;
               ListNode* tmp = l2;
                
               l2 = l2->next;
                cur->next = new ListNode();
                delete(tmp);
            }
            else{
                cur->val = l1->val;
               ListNode* tmp = l1;
            
               l1 = l1->next;
                cur->next = new ListNode();
                delete(tmp);
            }
            cur = cur->next;
            prev = cur;
        }
        while(l1!=NULL){
          cur->val = l1->val;
          ListNode* tmp = l1;
          l1 = l1->next;
          cur->next = new ListNode();
            prev = cur;
            cur = cur->next;
            
            delete(tmp);
        }
        while(l2!=NULL){
            cur->val = l2->val;
            ListNode* tmp = l2;
            l2 = l2->next;
            cur->next = new ListNode();
            prev = cur;
            cur = cur->next;
            delete(tmp);
        }
        if(cur!=NULL){
            ListNode* tmp = prev->next;
            prev->next = NULL;
            delete(tmp);
        }
        return ans;
    }
};
