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

void deleteStart() {
    if (head == NULL) return;

    if (head->next == head) {
        delete head;
        head = NULL;
        return;
    }

    Node* last = head;
    while (last->next != head) last = last->next;

    Node* temp = head;
    head = head->next;
    last->next = head;

    delete temp;
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
    deleteStart();
    display();
}
