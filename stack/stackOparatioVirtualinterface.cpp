
#include <iostream>
using namespace std;
#define MAX 100
class interface{
	public:
		virtual void push(int x)=0;
		virtual void pop()=0;
		virtual int Top()=0;
		virtual	bool isEmpty()=0;
		virtual bool isFull()=0;
};
class Stack:public interface{
    private :
        int a[MAX];
        int top;
    public:
        Stack(){
        top=-1;    
         }    

        void push(int value) override{
          if(top>MAX-1){
               cout<<"Stack Overflow:"<<endl;
                return;
             }
          a[++top]=value;
        }
          int Top(){
              return a[top];
              }
    void pop() override{
        if(top<0){
            cout<<"stack underflow"<<endl;
        return;
        }
        top--;
    }
    void display() {
        for(int i=top;i>=0;i--)
                cout<<a[i]<<" ";
                cout<<endl;
    }
     bool isEmpty() override{
         if(top<0)
             return 1;
         return 0;
     }
    bool isFull() override{
        if(top>=MAX-1)
                return 1;
        return 0;
		}
};

int main() {
    Stack s;
    s.push(10);
    s.push(50);
    s.push(30);
    cout<<"Stack:";
    s.display();
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
