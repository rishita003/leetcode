/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == nullptr || left == right) {
            return head;
        }

        // Create a dummy node to simplify edge cases where left is 1
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;

        // Traverse the list to reach the node just before the 'left' position
        for (int i = 1; i < left; ++i) {
            prev = prev->next;
        }

        // 'start' will be the first node in the reversal section
        ListNode* start = prev->next;
        // 'then' will be the node to be reversed
        ListNode* then = start->next;

        // Reverse the sublist between 'left' and 'right'
        for (int i = 0; i < right - left; ++i) {
            start->next = then->next;  // Link start to the node after 'then'
            then->next = prev->next;   // Move 'then' to the front of the reversed section
            prev->next = then;         // Move 'prev' to point to 'then'
            then = start->next;        // Move 'then' to the next node to reverse
        }

        return dummy->next;
    }
};