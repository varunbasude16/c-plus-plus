#include<iostream>
using namespace std;
class maxHeap{
	private:
		int a[100];
		int size;
	public:
		maxHeap(){
			size=0;
		}
		void insert(int value){
			int i = size;
			a[size]=value;
			size++;
			
			while(i>0&& a[i]>a[(i-1)/2]){
				swap(a[i],a[(i-1)/2]);
				i=(i-1)/2;
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
		
		void deleteRoot(){
			if(size==0){
				cout<<"heap undrflow\n";
				return;
			}
			cout<<"deleted element:"<<a[0]<<endl;
			a[0]=a[size-1];
			size--;
			
			heapify(0);
		}
		void display(){
			for(int i=0;i<size;i++){
				cout<<a[i]<<" ";
			}
			cout <<endl;
		}
};



int main(){
	maxHeap h;
	
	cout<<"enter number of elemets\n";
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		int value;
		cin>>value;
		h.insert(value);
	}
	
	cout<<"Before delete:";
	h.display();
	cout<<"after deleted:";
	h.deleteRoot();
	h.display();
	
	
	return 0;
}
