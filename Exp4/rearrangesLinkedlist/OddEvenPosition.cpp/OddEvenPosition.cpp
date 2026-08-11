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

Node* rearrange(Node* head) {
    if (head == NULL || head->next == NULL)
        return head;

    Node* odd = head;
    Node* even = head->next;
    Node* evenHead = even;

    while (even != NULL && even->next != NULL) {
        odd->next = even->next;
        odd = odd->next;

        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenHead;

    return head;
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

    head = rearrange(head);

    cout << "Rearranged list: ";
    display(head);

    return 0;
}
