//
//  2.cpp
//  
//
//  Created by Cui on 2020/2/3.
//


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = NULL, *prev = NULL;
        int carry = 0;
        while(l1 || l2){
            int val1 = l1? l1 -> val : 0;
            int val2 = l2? l2 -> val : 0;
            int res = val1 + val2 + carry;
            carry = res / 10;
            int val = res % 10;
            ListNode* cur = new ListNode(val);
            if(!head) head = cur;
            if(prev) prev -> next = cur;
            prev = cur;
            l1 = l1? l1 -> next: NULL;
            l2 = l2? l2 -> next: NULL;
        }
        if(carry > 0){
            ListNode* cur = new ListNode(carry);
            prev -> next = cur;
        }
        return head;
    }
};
