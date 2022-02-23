// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public: // this method does NOT deallocate the removed pointer as leetcode throws errors when you attempt to do so
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *fast = head, *slow = head;
        for (int i = 0; i < n; i++) fast = fast->next;
        if (!fast) return head->next;
        while (fast->next) fast = fast->next, slow = slow->next;
        slow->next = slow->next->next;
        return head;
        
        /* first solution
        ListNode *curr = head;
        int num_nodes = 0;
        while (curr) {
            num_nodes++;
            curr = curr->next;
        }
        if (num_nodes == n) {
            return head->next;
        }
        else {
            curr = head;
            for (int i = 0; i < num_nodes - n - 1; i++) {
                curr = curr->next;
            }
            curr->next = curr->next->next;
        }
        return head;
        */
    }
};
