#include<iostream>
using namespace std;
void swap(int &a, int &b) {
	int t=a;
	a=b;
	b=t;
}
void selectionsort(int a[], int n){
	int minindex;
	for(int i=0;i<n-1;i++){
		minindex=i;
		for(int j=i+1;j<n;j++)
		if ( a[minindex]>a[j])
		minindex=j;
		swap(a[minindex],a[i]);
		}
	}
int main()
{
	int ar[]={1,20,3,5,0};
	int n=5;
	selectionsort(ar,n);
	for(int i=0;i<n;i++){
		cout<<ar[i]<<" ";
	}
	
	return 0;
}
