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
        ListNode *beg = head, *end = head;
        for (int i = 1; i < k; i++) beg = beg->next;
        ListNode *fast = beg;
        while (fast->next) {
            
        }
        
        return head;
    }
};
