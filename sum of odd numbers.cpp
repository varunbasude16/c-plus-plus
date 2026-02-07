#include<iostream>
using namespace std;

void sumOfArray(int ar[],int n ){
	int sum=0;
	for(int i=0;i<n;i++)
	{	
		if(ar[i]%2!=0)
		{
		  sum=sum+ar[i];
	    }
	}
	cout<<"Sum of array values:"<<sum<<endl;
}
void printArray(int ar[],int n)
{
	for(int i=0;i<n;i++)
	cout<<"ar[i]:"<<ar[i]<<endl;
}
int main()
{
	int n=5;
	int ar[]={9,8,3,0,6};
	cout<<"original array:"<<endl;
	printArray(ar,n);
    sumOfArray(ar,n);
	return 0;
}
