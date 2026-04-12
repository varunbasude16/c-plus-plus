#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
	node* prev;
};
class List{
	private:
	 node* head;
	public:
		List(){
			head=NULL;
		}
		void display(){
			if(head==NULL){
				cout<<"list is Empty\n";
				return;
			}
			node* temp=head;
			do{
				cout<<temp->data<<" ";
				temp=temp->next;
			}while(temp!=head);
			cout<<endl;
		}
		void insertAtEnd(int value){
			
			node* newNode=new node();
			newNode->data=value;
			if(head==NULL){
				newNode->next=newNode;
				newNode->prev=newNode;
				head=newNode;
				return;
			}
			node* last=head->prev;
			
			newNode->next=head;
			newNode->prev=last;
			
			
			last->next=newNode;
			head->prev=newNode;
			
			
		}
		
};
int main() {
    List l;

    l.insertAtEnd(10);
    l.insertAtEnd(2);
    l.insertAtEnd(354);

    l.display();  

    return 0;
}

