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
		void DeleteEnd(){
			Node* temp=head;
			Node* prev=NULL;
			
			while(temp->next!=NULL){
				prev=temp;
				temp=temp->next;
			}
			cout<<"deleted:"<<temp->data<<endl;
			prev->next=NULL;
			
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
	L1.DeleteEnd();
	L1.display();
	return 0;
}
