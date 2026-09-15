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

void rearrange(Node* head) {
    vector<int> values;

    Node* current = head;

    while (current != NULL) {
        values.push_back(current->data);
        current = current->next;
    }

    current = head;

    for (int i = 0; i < values.size(); i += 2) {
        current->data = values[i];
        current = current->next;
    }

    for (int i = 1; i < values.size(); i += 2) {
        current->data = values[i];
        current = current->next;
    }
}

void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    int n;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter elements: ";

    Node* head = createList(n);

    rearrange(head);

    cout << "Rearranged list: ";
    display(head);

    return 0;
}
