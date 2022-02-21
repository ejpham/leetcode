// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* newHead = new ListNode();
        ListNode* ans = newHead;
        ListNode* curr1 = l1, *curr2 = l2;
        int carry = 0;
        
        while (curr1 || curr2) {
            if (!ans->next) {
                if (curr1 && curr1->next) ans->next = new ListNode();
                if (curr2 && curr2->next) ans->next = new ListNode();
            }
            int temp;
            if (curr1 && curr2) temp = curr1->val + curr2->val;
            else if (!curr2) temp = curr1->val;
            else temp = curr2->val;
            if (carry > 0) {
                temp += carry;
                carry = 0;
            }
            if (temp >= 10) {
                carry = temp / 10;
                ans->val = temp % 10;
            }
            else ans->val = temp;
            if (curr1) curr1 = curr1->next;
            if (curr2) curr2 = curr2->next;
            if (ans->next) ans = ans->next;
        }
        if (carry > 0) ans->next = new ListNode(carry);
        return newHead;
    }
};
