#include<iostream>
using namespace std;
struct Node{
	Node* prev;
	int data;
	Node* next;
};

class linkedlist{
	private:
		Node* head=NULL;
	public:
		void insertEnd(int value){
			Node* newNode=new Node();
			newNode->data=value;
			newNode->next=NULL;
			if(head==NULL){
				head=newNode;
				newNode->prev=NULL;
				return;
			}
			Node* temp=head;
			while(temp->next!=NULL){
				temp=temp->next;
			}
			temp->next=newNode;
			newNode->prev=temp;
			
			
		}
		void deleteValue(int value) {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;

    // Search for the value
    while (temp != NULL && temp->data != value) {
        temp = temp->next;
    }

    // Value not found
    if (temp == NULL) {
        cout << "Value not found\n";
        return;
    }

    // Case 1: Deleting head node
    if (temp == head) {
        head = head->next;
        if (head != NULL)
            head->prev = NULL;
        delete temp;
        return;
    }

    // Case 2: Deleting last node
    if (temp->next == NULL) {
        temp->prev->next = NULL;
        delete temp;
        return;
    }

    // Case 3: Deleting middle node
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;

    delete temp;
}
		
		
		void display(){
			Node* temp=head;
			while(temp!=NULL){
				cout<<temp->data<<"->";
				temp=temp->next;
			}
			cout<<"NULL"<<endl;
		}
};


int main(){
	linkedlist L1;
	L1.insertEnd(5);
	L1.insertEnd(4);
	L1.insertEnd(3);
	L1.display();
	L1.deleteValue(3);
	L1.display();
	return 0;
}
