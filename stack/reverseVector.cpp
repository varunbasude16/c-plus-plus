#include <iostream>
#include<vector>
using namespace std;
#include<stack>


void reverse (vector<int>& myvec){
    stack<int> s;
     
     for(int i=0;i<myvec.size();i++)
    s.push(myvec[i]);
    
    for(int i=0;i<myvec.size();i++){
    myvec[i]=s.top();
    s.pop()
    
    }
    
}


int main() {
vector<int> myvec = {1,2,3,4,5};

for(int value : myvec)
    cout << value << " ";
 reverse(myvec);
 cout<<endl;
 for(int value : myvec)
    cout << value << " ";
 return 0;
}
