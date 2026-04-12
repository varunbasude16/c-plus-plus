#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node* prev;
};

class List {
	private:
    	Node* head;
	public:
    List() {
        head = NULL;
    }
    
    void insertEnd(int value) {
        Node* newNode = new Node();
        newNode->data = value;

        if (head == NULL) {
            newNode->next = newNode;
            newNode->prev = newNode;
            head = newNode;
            return;
        } 
		
            Node* last = head->prev;

            newNode->next = head;
            newNode->prev = last;

            last->next = newNode;
            head->prev = newNode;
    
    }
	void deleteBegin() {
        if(head==NULL){
        	cout<<"emtpy list\n";
        	return;
		}
		if(head->next==head){
			delete head;
			head=NULL;
			return;
		}
		
		Node* last = head->prev;
		Node* temp=head;
		
		head=head->next;
		head->prev=last;
		
		last->next=head;
		delete temp;
        
    }

    
    void display() {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
    	}
        Node* temp = head;

        do {
            cout<<temp->data<<" ";
            temp=temp->next;
        } while (temp!= head);
        cout << endl;
    }
};

int main() {
    List l;

    l.insertEnd(10);
    l.insertEnd(20);
    l.insertEnd(30);

    cout << "Original List: ";
    l.display();

    l.deleteBegin();

    cout << "After deleting from beginning: ";
    l.display();

    return 0;
}
