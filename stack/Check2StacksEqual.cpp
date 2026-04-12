#include<iostream>
#define max 100
using namespace std;
class stack{
	private:
		int a[max];
		int topindex;
	public: 
		stack(){
			topindex=-1;
		}
		void push(int value){
			if(topindex>=max-1){
				cout<<"stack overflow"<<endl;
				return;
			}
			a[++topindex]=value;
		}
		void pop(){
			if(topindex<0){
				cout<<"stack underflow"<<endl;
				return;
			}
			topindex--;
		}
		int top(){
			return a[topindex];
		}
		void display(){
			for(int i=topindex;i>=0;i--)
			cout<<a[i]<<" ";
			cout<<endl;
		}
		bool isEmpty(){
			if(topindex<0){
				return 1;
			}
			return 0;
		}
		bool isFull(){
			if(topindex>=max-1)
				return 1;
			return 0;
		}
};
void isStackEqual(stack& a,stack& b){
	while(!a.isEmpty() && !b.isEmpty())
	if(a.top()==b.top())
	{
		a.pop();
		b.pop();
	}
	else{
		cout<<"not equal"<<endl;
		return;
	}
	cout<<"Equal"<<endl;
	
}
int main(){
	stack s1,s2;
	s1.push(10);
	s1.push(15);
	s1.push(20);
	s1.push(25);
	cout<<"stack1 : ";
	s1.display();
	
	s2.push(10);
	s2.push(15);
	s2.push(20);
	s2.push(25);
	cout<<"stack2 : ";
	s2.display();
	
	isStackEqual(s1,s2);
	
	return 0;
}
