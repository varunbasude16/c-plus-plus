#include<iostream>
using namespace std;
void swap(int &a, int &b) {
	int t=a;
	a=b;
	b=t;
}
void selectionsort(int a[], int n){
	int maxindex;
	for(int i=n-1;i>=0;i--){
		maxindex=0;
		for(int j=1;j<=i;j++)
		if ( a[maxindex]<a[j])
		maxindex=j;
		swap(a[maxindex],a[i]);
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
