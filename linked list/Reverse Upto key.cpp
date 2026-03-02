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
			while(temp!=NULL)
			{
				cout<<temp->data<<"->";
				temp=temp->next;
			} cout<<"\n";
		} 
		void insert(int value)
		{
			Node* newNode=new Node();
			newNode->data=value;
			newNode->next=head;
			head=newNode;
		}
		void reverse(int key){
			Node* prev=NULL;
			Node* current=head;
			Node* next=NULL;
			while(current!= NULL&& current->data!= key){
				next=current->next;
				current->next=prev;
				prev=current;
				current=next;
			}
			next=current->next;
			current->next=prev;
			
			head->next=next;
			head=current;
		}
		
};
int main(){
	linkedlist L;
	int key;
	L.insert(25);
	L.insert(45);
	L.insert(65);
	L.insert(90);
	L.insert(11);
	L.insert(77);
	L.display();
	cout<<"Enter key \n";
	cin>> key;
	cout <<"ELEMENTS AFTER REVERSING\n";
	L.reverse(key);
	L.display();
	return 0;
}
