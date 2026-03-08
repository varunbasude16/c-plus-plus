#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

// Insert node at end
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

// Display linked list
void display() {
    Node* temp = head;
    cout << "Linked List: ";
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// Delete duplicates and return sum
int deleteDuplicates() {
    int sum = 0;
    Node *current, *temp, *prev;

    current = head;

    while (current != NULL) {
        prev = current;
        temp = current->next;

        while (temp != NULL) {
            if (current->data == temp->data) {
                sum += temp->data;
                prev->next = temp->next;
                delete temp;
                temp = prev->next;
            } else {
                prev = temp;
                temp = temp->next;
            }
        }
        current = current->next;
    }

    return sum;
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

    cout << "\nOriginal ";
    display();

    int sum = deleteDuplicates();

    cout << "\nAfter deleting duplicates ";
    display();

    cout << "Sum of deleted duplicate elements: " << sum << endl;

    return 0;
}