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
        ListNode *slow = head, *fast = head->next;
        while (fast && slow->val == fast->val) { // first two nodes are duplicates
            int val = fast->val;
            while (fast && fast->val == val) {
                ListNode *ftemp = fast;
                fast = fast->next;
                delete ftemp;
                ftemp = nullptr;
            }
            delete slow;
            if (!fast) {
                slow = nullptr;
                return slow;
            }
            slow = fast;
            head = slow;
            fast = fast->next;
        }
        while (fast && fast->next) {
            if (fast->val == fast->next->val) {
                int val = fast->val;
                while (fast && fast->val == val) {
                    ListNode *ftemp = fast;
                    fast = fast->next;
                    delete ftemp;
                    ftemp = nullptr;
                }
                slow->next = fast;
            }
            else {
                slow = slow->next;
                fast = fast->next;
            }
        }
        return head;
    }
};
