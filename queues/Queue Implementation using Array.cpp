#include<iostream>
#define SIZE 100
using namespace std;
class Queue{
	private:
		int a[SIZE];
		int front;
		int rear;
	public:
		Queue(){
			front=0;
			rear= -1;
		}
		bool isEmpty(){
			return front>rear;
		}
		bool isFull(){
			return rear==SIZE-1;
		}
		void enqueue(int value){
			if(isFull()){
				cout<<"Queue is Full! cannot enqueue\n";
				return;
			}
			a[++rear]=value;
			cout<<"Enqueued :"<<value<<endl;
		}
		void dequeue(){
			if(isEmpty()){
				cout<<"Queue is Empty! cannot dequeue"<<endl;
			}
			cout<<"Dequeued :"<<a[front]<<endl;
			front++;
		}
		int peek(){
			if(isEmpty()){
				cout<<"Queue is empty \n";
				return -1;
			}
			return a[front];
		}
		void display(){
			for(int i=front;i<=rear;i++){
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
			
};
int main(){
	Queue my;
	my.enqueue(23);
	my.enqueue(24);
	my.enqueue(25);
	my.display();
	
	my.dequeue();
	my.display();
	
	cout<<"front Element :"<<my.peek()<<endl;	
	return 0;
}
