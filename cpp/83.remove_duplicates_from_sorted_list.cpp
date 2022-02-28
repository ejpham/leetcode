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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return nullptr;
        ListNode *fast = head, *slow = fast;
        fast = fast->next;
        while (fast && fast->next) {
            if (slow->val == fast->val) {
                ListNode *temp = fast;
                fast = fast->next;
                delete temp;
                temp = nullptr;
                slow->next = fast;
            }
            else {
                slow = slow->next;
                fast = fast->next;
            }
        }
        if (fast && !fast->next && slow->val == fast->val) {
            slow->next = nullptr;
            delete fast;
            fast = nullptr;
        }
        return head;
    }
};
