#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

// Insert at end (for initial list creation)
void insertEnd(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
}

// Insert at any position
void insertAtPosition(int value, int pos) {
    Node* newNode = new Node();
    newNode->data = value;

    if (pos == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Position not valid\n";
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// Display list
void display() {
    Node* temp = head;
    cout << "Linked List: ";
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    int n, value, pos;

    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value: ";
        cin >> value;
        insertEnd(value);
    }

    display();

    cout << "Enter value to insert: ";
    cin >> value;

    cout << "Enter position: ";
    cin >> pos;

    insertAtPosition(value, pos);

    display();

    return 0;
}