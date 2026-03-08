#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

// Insert at end
void insert(int value) {
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

// Delete element by value
void deleteElement(int key) {
    Node *temp = head, *prev = NULL;

    // If first node is the one to delete
    if (temp != NULL && temp->data == key) {
        head = temp->next;
        delete temp;
        cout << "Element deleted\n";
        return;
    }

    // Search for the element
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Element not found\n";
        return;
    }

    prev->next = temp->next;
    delete temp;
    cout << "Element deleted\n";
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
    int n, value, key;

    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value: ";
        cin >> value;
        insert(value);
    }

    display();

    cout << "Enter element to delete: ";
    cin >> key;

    deleteElement(key);

    display();

    return 0;
}