#include<iostream>
using namespace std;
int sum(int a[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	if(i%2==0)
	sum+=a[i];
	return sum;
}

int main()
{
	int ar[]={1,20,3,5,0};
	int n=5;
	cout<<sum(ar,n);
	
	return 0;
}
