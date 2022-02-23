// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public: // this does NOT deallocate "deleted" node due to leetcode
    ListNode* deleteMiddle(ListNode* head) {
        if (!head->next) return head->next;
        ListNode *curr = head;
        int n = 0;
        while (curr) n++, curr = curr->next;
        curr = head;
        for (int i = 1; i < n / 2; i++) curr = curr->next;
        curr->next = curr->next->next;
        return head;
    }
};
