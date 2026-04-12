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
			cout<<endl;
		}
		void insertPos(int value, int pos){
			Node* newNode=new Node();
			newNode->data=value;
			
			if(head==NULL){
				if(pos==1){
				
					newNode->next=newNode;
					newNode->prev=newNode;
					head=newNode;
				} else 
					cout<<"invalid"<<endl;
				return;	 
			}
			
			if(pos==1){
				Node* last=head->prev;
				
				newNode->next=head;
				newNode->prev=last;
				
				head->prev=newNode;
				last->next=newNode;
				
				head=newNode;
				
				return;
			}
			
			Node* temp=head;
			int i;
			for( i=1;i<pos-1 && temp->next!=head;i++)
				temp=temp->next;
			
			
			if(temp->next==head && i==pos-1){
				Node* last= head->prev;
				
				newNode->next=head;
				newNode->prev=last;
				
				head->prev=newNode;
				last->next=newNode;
				
				
				return;
			}
			
			if(i==pos-1){
				Node* nextNode= temp->next;
				
				newNode->next=nextNode;
				newNode->prev= temp;
				
				temp->next=newNode;
				nextNode->prev=newNode;
				
			} else {
				cout<<"invalid pos\n";
			}
	}
};
int main() {
    List l;

    l.insertPos(10, 1);
    l.insertPos(20, 2);
    l.insertPos(30, 3);
    l.insertPos(25, 3);

    l.display();  

    return 0;
}
