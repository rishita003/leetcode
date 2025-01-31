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
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }
        ListNode* one = head;
        ListNode* two = head;
        ListNode* prev = nullptr; 

        
        while (two != nullptr && two->next != nullptr) {
            prev = one;
            one = one->next;
            two = two->next->next;
        }
        prev->next = one->next;
        delete one;

        return head;

          
    }
};