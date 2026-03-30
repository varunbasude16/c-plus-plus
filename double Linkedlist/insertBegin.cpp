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
		void insertBegin(int value){
			Node* newNode=new Node();
			newNode->data=value;
			newNode->prev=NULL;
			if(head==NULL){
				head=newNode;
				newNode->next=NULL;
				return;
			}
			newNode->next=head;
			head->prev=newNode;
			head=newNode;
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
	L1.insertBegin(5);
	L1.insertBegin(4);
	L1.insertBegin(3);
	L1.display();
	return 0;
}
