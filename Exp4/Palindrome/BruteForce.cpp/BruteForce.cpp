#include <iostream>
#include <vector>
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
    vector<int> values;

    while (head != NULL) {
        values.push_back(head->data);
        head = head->next;
    }

    int left = 0;
    int right = values.size() - 1;

    while (left < right) {
        if (values[left] != values[right])
            return false;

        left++;
        right--;
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
