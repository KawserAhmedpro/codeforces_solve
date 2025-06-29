#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;

    // Constructor to initialize a node
    ListNode(int x) : val(x), next(nullptr) {}
};

// Solution class with the mergeTwoLists method
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(0);  // Dummy node to simplify list construction
        ListNode* cur = dummy;  // Pointer to track the current node in the merged list

        // Traverse both lists and merge them in sorted order
        while (list1 && list2) {
            if (list1->val > list2->val) {
                cur->next = list2;
                list2 = list2->next;
            } else {
                cur->next = list1;
                list1 = list1->next;
            }
            cur = cur->next;
        }

        // Attach the remaining nodes from either list1 or list2
        cur->next = list1 ? list1 : list2;

        // Return the head of the merged list (skipping the dummy node)
        return dummy->next;
    }
};

// Helper function to create a linked list from an array
ListNode* createLinkedList(const int arr[], int size) {
    if (size == 0) return nullptr;

    ListNode* head = new ListNode(arr[0]);  // Create the head node
    ListNode* current = head;

    for (int i = 1; i < size; i++) {
        current->next = new ListNode(arr[i]);  // Add new nodes
        current = current->next;
    }

    return head;
}

// Helper function to print a linked list
void printLinkedList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// Main function to test the solution
int main() {
    // Create two sorted linked lists
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};

    ListNode* list1 = createLinkedList(arr1, sizeof(arr1) / sizeof(arr1[0]));
    ListNode* list2 = createLinkedList(arr2, sizeof(arr2) / sizeof(arr2[0]));

    // Print the input lists
    cout << "List 1: ";
    printLinkedList(list1);
    cout << "List 2: ";
    printLinkedList(list2);

    // Merge the lists
    Solution solution;
    ListNode* mergedList = solution.mergeTwoLists(list1, list2);

    // Print the merged list
    cout << "Merged List: ";
    printLinkedList(mergedList);

    return 0;
}
