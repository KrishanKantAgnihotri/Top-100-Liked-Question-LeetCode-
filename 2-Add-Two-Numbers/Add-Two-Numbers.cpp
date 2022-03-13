//O(n)

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode();
        ListNode* res = ans;
        ListNode* p = l1;
        ListNode* q = l2;
        ListNode* pre = NULL;
        int carry = 0 ; 
        while( (p!=NULL) || (q!=NULL) ){
            int cur = ((p!=NULL)?p->val:0)  + ((q!=NULL)?q->val:0) + carry;
            carry = cur/10;
            cur%=10;
            ans->val = cur;
        ListNode* tmp = new ListNode();
            ans->next = tmp;
            pre = ans;
            ans = ans->next;
            if(p)
            p = p->next;
            if(q)
            q = q->next;
        }
        if(carry){
            ans->val = carry;
        }
        else{
            pre->next = NULL;
        }
        
        return res;
    }
};
