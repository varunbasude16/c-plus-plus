#include<iostream>
using namespace std;


class maxHeap{
		int a[100];
		int size;
	public:
		maxHeap(){
			size=0;
		}
		void input(){
			cout<<"Enter number of Elements:";
			cin>>size;
			
			cout<<"Enter elements:";
			for(int i=0;i<size;i++){
				cin>>a[i];
				}
	
		}
 		void heapify(int index){
			int largest=index;
			int left=2*index+1;
			int right=2*index+2;
			
			if(left<size&&a[left]>a[largest])
				largest=left;
			if(right<size&&a[right]>a[largest])
				largest=right;
			if(largest!=index){
				swap(a[largest],a[index]);
				heapify(largest);
			}			
		}
		
		void BuildHeap(){
			for(int i=size/2 -1;i>=0;i--){
				heapify(i);
			}
		}
		
		
		
		void display(){
			for(int i=0;i<size;i++)
				cout<<a[i]<<" ";
				
			cout<<endl;
		}
};

int main(){
	
	

	maxHeap m;
	m.input();

	m.BuildHeap();
	m.display();
	
	
	return 0;
}
