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
    int numNodes(ListNode *head) {
        int cnt = 0;
        ListNode *temp = head;
        while (temp) {
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }

    ListNode *rotateRight(ListNode *head, int k) {
        if (!head || !head->next) return head;
        // a full rotation is done when the list is rotated by the number of times = the size of the list
        // doing this prevents unnecessary rotations
        k = k % numNodes(head);
        while (k) {
            ListNode *slow = head, *fast = head->next;
            // move slow to second to last node, fast to last node
            while (fast && fast->next) {
                slow = slow->next;
                fast = fast->next;
            }
            fast->next = head;
            slow->next = nullptr;
            head = fast;
            k--;
        }
        return head;
    }
};
