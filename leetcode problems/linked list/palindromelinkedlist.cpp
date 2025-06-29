#include <iostream>
#include <stack>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function to check if a linked list is a palindrome using a stack
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        ListNode* p = head;

        // Push all node values onto the stack
        while (p != NULL) {
            s.push(p->val);
            p = p->next;
        }

        // Compare values while popping from the stack
        while (head && !s.empty()) {
            if (s.top() != head->val) {
                return false; // Not a palindrome
            }
            s.pop();
            head = head->next;
        }
        return true; // Palindrome
    }
};

// Helper function to create a linked list from user input
ListNode* createLinkedList(int n) {
    if (n <= 0) return NULL;

    cout << "Enter " << n << " elements: ";
    int val;
    cin >> val;
    ListNode* head = new ListNode(val);
    ListNode* current = head;

    for (int i = 1; i < n; i++) {
        cin >> val;
        current->next = new ListNode(val);
        current = current->next;
    }
    return head;
}

// Helper function to print a linked list (optional)
void printLinkedList(ListNode* head) {
    while (head) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// Main function
int main() {
    int n;
    cout << "Enter the number of elements in the linked list: ";
    cin >> n;

    ListNode* head = createLinkedList(n);

    cout << "Your linked list: ";
    printLinkedList(head);

    Solution solution;
    if (solution.isPalindrome(head)) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }

    return 0;
}
