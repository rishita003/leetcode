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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr || k == 0) {
            return head;
        }

        // Step 1: Find the length of the list
        ListNode* curr = head;
        int length = 1; // start with 1 because we are already at head
        while (curr->next != nullptr) {
            curr = curr->next;
            length++;
        }

        // Step 2: Compute effective k (in case k > length)
        k = k % length;
        if (k == 0) {
            return head; // no need to rotate if k is a multiple of length
        }

        // Step 3: Make the list circular by connecting the last node to the
        // head
        curr->next = head;

        // Step 4: Find the new tail (n - k % n - 1) and new head (n - k % n)
        ListNode* newTail = head;
        for (int i = 1; i < length - k; i++) {
            newTail = newTail->next;
        }

        // Step 5: Set the new head and break the circular list
        ListNode* newHead = newTail->next;
        newTail->next = nullptr;

        return newHead;
    }
};