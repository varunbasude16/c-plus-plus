#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insertEnd(int value) {
    Node* newNode = new Node();
    newNode->data = value;

    if (head == NULL) {
        head = newNode;
        newNode->next = head;
        return;
    }

    Node* temp = head;
    while (temp->next != head) temp = temp->next;

    temp->next = newNode;
    newNode->next = head;
}

void deleteValue(int value) {
    if (head == NULL) return;

    if (head->data == value) {
        Node* last = head;
        while (last->next != head) last = last->next;

        Node* temp = head;

        if (head->next == head) {
            head = NULL;
        } else {
            head = head->next;
            last->next = head;
        }

        delete temp;
        return;
    }

    Node* temp = head;
    Node* prev;

    do {
        prev = temp;
        temp = temp->next;

        if (temp->data == value) {
            prev->next = temp->next;
            delete temp;
            return;
        }

    } while (temp != head);

    cout << "Value not found";
}

void display() {
    if (head == NULL) return;

    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);

    deleteValue(20);
    display();
}
