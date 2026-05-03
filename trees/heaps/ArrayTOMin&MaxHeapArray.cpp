#include<iostream>
using namespace std;

class maxH{
	private:
		int arr[100];
		int size;
	public:
		maxH(){
			size=0;
		}
		void insert(int val){
			int i=size;
			arr[size]=val;
			size++;
			
			while(i>0&&arr[(i-1)/2]<arr[i]){
				swap(arr[i],arr[(i-1)/2]);
				i=(i-1)/2;
			}
		}
		void display(){
			for (int i=0;i<size;i++)
			cout<<arr[i]<<" ";
			cout<<endl;
		}
};
class minH{
	private:
		int arr[100];
		int size;
	public:
		minH(){
			size=0;
		}
		void insert(int val){
			int i=size;
			arr[size]=val;
			size++;
			
			while(i>0&&arr[(i-1)/2]>arr[i]){
				swap(arr[i],arr[(i-1)/2]);
				i=(i-1)/2;
			}
		}
		void display(){
			for(int i=0;i<size;i++){
				cout<<arr[i]<<" ";
			}
			cout << endl;
		}
		
};


int main(){
	minH a;
	maxH b;
	 cout<<"enter number of elements\n";
	 int n;
	 cin>>n;
	 
	 cout<<"enter elements:";
	 for(int i=0;i<n;i++){
	 	int value;
	 	cin>>value;
	 	a.insert(value);
	 	b.insert(value);
	 }
	 
	 cout<<"min heap:";
	 a.display();
	 cout<<"max heap:";
	 b.display();	 
	
	
	return 0;
}
