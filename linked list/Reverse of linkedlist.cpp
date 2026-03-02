#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};
class linkedlist{
	private:
		Node* head;
	public:
		linkedlist(){
			head=NULL;
		}
		void display(){
			Node* temp=head;
			while (temp!=NULL)
			{
				cout<<temp->data<<"->";
				temp=temp->next;
			}
			cout<<"END\n";
		}
		void insert(int value)
		{
			Node* newNode=new Node();
			newNode->data=value;
			newNode->next=head;
			head=newNode;
		}
		void reverse(){
			Node* prev=NULL;
			Node* current=head;
			Node* next=NULL;
			while(current!=NULL){
				next=current->next;
				current->next=prev;
				prev=current;
				current=next;
			}
			head=prev;
		}
				
};
int main(){
	linkedlist L1;
	L1.insert(6);
	L1.insert(15);
	L1.insert(64);
	L1.display();
	
	L1.reverse();
	L1.display();
	
	return 0;
}
