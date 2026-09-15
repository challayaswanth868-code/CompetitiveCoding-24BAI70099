#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

Node* createList(int n) {
    if (n == 0)
        return NULL;

    int value;
    cin >> value;

    Node* head = new Node(value);
    Node* current = head;

    for (int i = 1; i < n; i++) {
        cin >> value;
        current->next = new Node(value);
        current = current->next;
    }

    return head;
}

bool isPalindrome(Node* head) {
    if (head == NULL || head->next == NULL)
        return true;

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* previous = NULL;
    Node* current = slow;

    while (current != NULL) {
        Node* nextNode = current->next;
        current->next = previous;
        previous = current;
        current = nextNode;
    }

    Node* first = head;
    Node* second = previous;

    while (second != NULL) {
        if (first->data != second->data)
            return false;

        first = first->next;
        second = second->next;
    }

    return true;
}

int main() {
    int n;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter elements: ";

    Node* head = createList(n);

    if (isPalindrome(head))
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}
