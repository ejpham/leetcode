#include <vector>
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
        if (!head->next) return head;
        ListNode *slow = head, *fast = head;
        fast = fast->next;
        bool firstDupe = slow->val == fast->val;
        if (firstDupe) {
            while (slow->val == fast->val) {
                ListNode *temp = fast;
                fast = fast->next;
                slow->next = fast;
                delete temp;
                temp = nullptr;
            }
            if (!fast) {
                delete slow;
                slow = nullptr;
                head = slow;
                return head;
            }
            head = fast;
            delete slow;
            slow = fast;
            fast = fast->next;
        }
        while (fast && fast->next) {
            if (slow->val == fast->val) {
                ListNode *temp = fast;
                fast = fast->next;
                slow->next = fast;
                delete temp;
                temp = nullptr;
            }
            else slow = slow->next, fast = fast->next;
        }
        return head;
    }
};
