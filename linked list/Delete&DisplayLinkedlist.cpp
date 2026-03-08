#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insert(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void deleteFromBeginning() {
    if (head == NULL) {
        cout << "Linked List is empty\n";
        return;
    }

    Node* temp = head;
    cout << "Deleted element: " << temp->data << endl;

    head = head->next;
    delete temp;
}

void display() {
    Node* temp = head;
    cout << "Current List: ";
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    int n, value;

    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value: ";
        cin >> value;
        insert(value);
    }

    display();

    cout << "\nDeleting elements from beginning:\n";

    while (head != NULL) {
        deleteFromBeginning();
        display();
    }

    return 0;
}