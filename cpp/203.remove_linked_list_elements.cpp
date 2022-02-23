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
    ListNode* removeElements(ListNode* head, int val) {
        if (!head) return nullptr;
        ListNode *curr = head;
        while (curr->next) {
            if (curr->next->val == val) {
                ListNode *temp = curr->next;
                curr->next = temp->next;
                delete temp;
                temp = nullptr;
            }
            else curr = curr->next;
        }
        if (head->val == val) {
            ListNode *temp = head;
            head = head->next;
            delete temp;
            temp = nullptr;
        }
        return head;
    }
};
