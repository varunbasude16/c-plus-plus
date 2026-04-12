// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#define MAX 100
class Stack{
    private :
        int a[MAX];
        int top;
    public:
        Stack(){
        top=-1;    
         }    

        void push(int value){
          if(top>MAX-1){
               cout<<"Stack Overflow:"<<endl;
                return;
             }
          a[++top]=value;
        }
          int Top(){
              return a[top];
              }
    void pop(){
        if(top<0){
            cout<<"stack underflow"<<endl;
        return;
        }
        top--;
    }
    void display(){
        for(int i=top;i>=0;i--)
                cout<<a[i]<<" ";
                cout<<endl;
    }
     bool isEmpty(){
         if(top<0)
             return 1;
         return 0;
     }
    bool isFull(){
        if(top>=MAX-1)
                return 1;
        return 0;
		}
	int size() {
        return top + 1;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(50);
    s.push(30);
    cout<<"Stack:";
    s.display();
	cout<<"size:"<<s.size;
	cout<<"After POP:";
    s.pop();
    s.display();
    cout<<"Top:"<< s.Top()<<endl;
    s.pop();
    s.pop();
    cout<<"After 2 POP"<<endl;
    cout<<"IsEmpty:"<<s.isEmpty();
    cout<<"\nIsFull:"<<s.isFull();
    

    return 0;
}
