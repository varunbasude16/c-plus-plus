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

void deleteEnd() {
    if (head == NULL) return;

    if (head->next == head) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;
    while (temp->next->next != head) {
        temp = temp->next;
    }

    Node* last = temp->next;
    temp->next = head;
    delete last;
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
    deleteEnd();
    display();
}
