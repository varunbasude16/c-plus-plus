#include<iostream>
using namespace std;
struct Node{

	int data;
	Node* left;
	Node* right;
	 
	Node(int val){
		data=val;
		left=NULL;
		right=NULL;
	}
	
};
void preOrder(Node* root){
	if(root==NULL) return ;
	cout<<root->data<<" ";
	preOrder(root->left);
	preOrder(root->right);
}
void postOrder(Node* root){
	if(root==NULL) return ;
	postOrder(root->left);
	postOrder(root->right);	
	cout<<root->data<<" ";
}
void inOrder(Node* root){
	if(root==NULL) return ;
	inOrder(root->left);
	cout<<root->data<<" ";
	inOrder(root->right);	
}

int main(){
	Node* B=new Node(1);
	B->left=new Node(2);
	B->right=new Node(3);
	B->left->left=new Node(4);
	B->left->right=new Node(5);
	B->right->left=new Node(6);	
	B->right->right=new Node(7);
	
	inOrder(B);
	cout<<endl;
	preOrder(B);
	cout<<endl;
	postOrder(B);		
	cout<<endl;
	
	
	return 0;
}
