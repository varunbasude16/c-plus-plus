#include<iostream>
using namespace std;
#include <queue>
bool ispalindrome(queue<int> q){
	int n=q.size(),a[n];
	for(int i=0;i<n;i++){
		a[i]=q.front();
		q.pop();
	}
	int	start=0,end=n-1;
	while(start<end){
		if(a[start]!=a[end])
			return 0;
		start++;
		end--;
	}	
	return 1;
}
int main(){
	queue<int> my;
	my.push(1);
	my.push(1);
	my.push(2);
	my.push(1);
	my.push(1);
	
	if(ispalindrome(my))
		cout<< "Yes palindrome\n";
	else 
		cout<<"not a palindrome\n";
	return 0;
}
