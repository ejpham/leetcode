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
        if (!head) return nullptr; /* if the list is empty, return nullptr */
        ListNode *curr = head;
        while (curr->next) { /* loop as the next pointer is not nullptr */
            if (curr->next->val == val) { /* if next pointer->val == val */
                ListNode *temp = curr->next;
                curr->next = temp->next; /* move current->next to current->next->next to skip over deleting node */
                delete temp; /* delete node */
                temp = nullptr; /* deallocate node */
            }
            else curr = curr->next; /* current only moves onto next if next->val != val */
        }
        if (head->val == val) { /* since we did not check if head->val == val */
            ListNode *temp = head;
            head = head->next;
            delete temp;
            temp = nullptr;
        }
        return head;
    }
};
