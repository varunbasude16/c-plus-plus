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
	void deleteElement(int key) {
        if(head==NULL){
        	cout<<"emtpy list\n";
        	return;
		}
		Node* temp=head;
		do{
			if(temp->data==key){
				if(temp->next==temp){
					delete temp;
					head=NULL;
					return;
				}
				if(head==temp){
					Node* last=head->prev;
					head=head->next;
					
					last->next=head;
					head->prev=last;
					delete temp;
					return;
				}
				
				if(temp->next==head){
					Node* beforeLast=temp->prev;
					
					beforeLast->next=head;
					head->prev=beforeLast;
					
					delete temp;
					return;
				}
				
				Node* prevNode=temp->prev;
				Node* nextNode=temp->next;
				
				prevNode->next=nextNode;
				nextNode->prev=prevNode;
				
				delete temp;
				return;
			}
			temp=temp->next;
		}while(temp!=head);
		
		cout<<"Element not found\n";
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

    l.deleteElement(20);

    cout << "After deleting 20 : ";
    l.display();

    return 0;
}
