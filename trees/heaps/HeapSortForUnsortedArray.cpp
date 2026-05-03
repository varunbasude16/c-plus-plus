#include<iostream>
using namespace std;

void heapify(int arr[],int index,int n){
	
	int largest=index;
	int left=2*index+1;
	int right=2*index+2;
	
	if(left<n&&arr[left]>arr[largest])
		largest=left;
	if(right<n&&arr[right]>arr[largest])
		largest=right;
	
	if(largest!=index){
		swap(arr[index],arr[largest]);
		heapify(arr,largest,n);
		
	}
}

void heapsort(int arr[],int n){
	for(int i=n-1;i>0;i--){
		swap(arr[0],arr[i]);
		heapify(arr,0,i);
		
	}
		
}
void BuildMaxheap(int arr[], int n){
	for(int i=n/2-1;i>=0;i--){
		heapify(arr,i,n);
	}
}

int main(){
	int a[7]={4,1,3,2,5,7,6};
	for( int i=0;i<7;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	
cout<<"after Sort:";
	BuildMaxheap(a,7);
	heapsort(a,7);
	
	for( int i=0;i<7;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
