#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};
class Queue{
	private:
		Node* rear;
	public:
		Queue(){
			rear=NULL;
		}
		void enqueue(int value){
			Node* newNode=new Node();
			newNode->data=value;
			
			if(rear==NULL){
				rear=newNode;
				newNode->next=rear;
			} else {
			
				newNode->next=rear->next;
				rear->next=newNode;
				rear=newNode;
				}
			
		}
		void dequeue(){
			if(rear==NULL){
				cout<<"Queue UnderFlow\n";
				return;
			}
			Node* temp=rear->next;
			
			if(rear==rear->next){
				rear=NULL;
			} else {
				rear->next=rear->next->next;
			}
			cout<<"Deleted:"<<temp->data<<endl;
			delete temp;
		}
		void display(){
			if(rear==NULL){
				cout<<"Queue is Empty\n";
				return;
			}
			Node* temp=rear->next;
			do{
				cout<<temp->data<<" ";
				temp=temp->next;
			}while ( temp!=rear->next);
			cout<<endl;
		}
			
	
};
int main(){
	Queue my;
	my.enqueue(45);
	my.enqueue(46);
	my.enqueue(47);
	
	my.display();
	
	my.dequeue();
	my.display();
	
	return 0;
}
