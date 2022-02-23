#include <algorithm>
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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *curr = head, *beg = nullptr, *end = head;
        while (--k) curr = curr->next;
        beg = curr;
        while (curr->next) curr = curr->next, end = end->next;
        std::swap(beg->val, end->val);
        return head;
    }
};
