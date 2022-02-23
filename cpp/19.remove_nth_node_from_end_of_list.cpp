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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
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
    }
};
