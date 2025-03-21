/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if (!root) return nullptr;
        
        Node* leftmost = root;
        
        while (leftmost->left) { // Stop when reaching leaf level
            Node* curr = leftmost;
            while (curr) {
                curr->left->next = curr->right; // Connect left to right
                if (curr->next) 
                    curr->right->next = curr->next->left; // Connect right to next's left
                
                curr = curr->next; // Move to next node in the same level
            }
            leftmost = leftmost->left; // Move to the next level
        }
        return root;
    }
};
