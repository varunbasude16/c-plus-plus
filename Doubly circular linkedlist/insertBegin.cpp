#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
	Node* prev;
};
class List{
	private:
		Node* head;
	public: 
		List(){
			head=NULL;
		}
		void insertAtBegin(int value){
			Node* newNode= new Node();
			newNode->data=value;
			if(head==NULL){
				newNode->next=newNode;
				newNode->prev=newNode;
				head=newNode;
				return;
			}
			Node* last= head->prev;
			newNode->next=head;
			newNode->prev=last;
			
			head->prev=newNode;
			last->next=newNode;
			
			
			head=newNode;
		}
		
		void display(){
			if(head==NULL){
				cout<<"list is empty\n";
				return;
			}
			Node* temp=head;
			do{
				cout<<temp->data<<" ";
				temp=temp->next;
			}while(temp!=head);
			cout<<"\n";
		}
};
int main() {
    List l;

    l.insertAtBegin(10);
    l.insertAtBegin(15);
    l.insertAtBegin(20);

    l.display();  

    return 0;
}

