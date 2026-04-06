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
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(50);
    s.push(30);
    s.display();
    cout<<endl;
    s.pop();
    s.display();
    cout<<endl<< s.Top()<<endl;
    

    return 0;
}
