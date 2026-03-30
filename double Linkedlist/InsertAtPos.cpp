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
		void insertPos(int value,int pos){
			Node* newNode=new Node();
			newNode->data=value;
			if(pos==1){
				
				newNode->next=head;
				newNode->prev=NULL;
				if(head!=NULL)
					head->prev=newNode;
				head=newNode;
				return;
			}
			Node* temp=head;
			for(int i=1;i<pos-1&&temp!=NULL;i++){
				temp=temp->next;
			}
			if(temp==NULL){
				cout<<"position not found"<<endl;
				return;
			}
			
			if(temp->next==NULL){
		
				newNode->next=NULL;
				temp->next=newNode;
				newNode->prev=temp;
			}
			
			newNode->next=temp->next;
			temp->next->prev=newNode;
			temp->next=newNode;
			newNode->prev=temp;
			
			
			
		}
		
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
	L1.insertEnd(7);
	L1.insertEnd(9);
	L1.display();
	L1.insertPos(0,7);
	L1.display()
;	return 0;
}
