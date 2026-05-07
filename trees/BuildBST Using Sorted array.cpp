#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* left;
	Node* right;
	
	Node(int val){
		data=val;
		left=right=NULL;
	}
};
void inOrder(Node* root){
	if(root==NULL) return;
	inOrder(root->left);
	cout<<root->data<<" ";
	inOrder(root->right);
}
Node* BuildBST(int arr[],int start,int end){
	if(start>end)
	 return NULL;
	int mid=(start+end)/2;
	Node* root=new Node(arr[mid]);
	
	root->left=BuildBST(arr,start,mid-1);
	root->right=BuildBST(arr,mid+1,end);
	
	return root;
}



int main(){
	int arr[]={1,2,3,4,5,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	Node* root=BuildBST(arr,0,n-1);
	
	inOrder(root);	
		
	return 0;
}
