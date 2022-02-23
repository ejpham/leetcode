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
        if (!head->next) return nullptr;
        ListNode *fast = head, *slow = head, *prev = slow;
        // this will always result in slow ending in the middle of the list as fast will end at end of list or end->next
        while (fast && fast->next) fast = fast->next->next, prev = slow, slow = slow->next;
        prev->next = slow->next;
        delete slow;
        slow = nullptr;
        return head;
        
        /* first solution
        if (!head->next) return nullptr;
        ListNode *curr = head;
        int n = 0;
        while (curr) n++, curr = curr->next;
        curr = head;
        for (int i = 1; i < n / 2; i++) curr = curr->next;
        curr->next = curr->next->next;
        return head;
        */
    }
};
