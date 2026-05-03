#include<iostream>
#include<vector>
using namespace std;
class Node{
public:
	int data;
	Node* right;
	Node* left;
	
	Node(int val){
		data=val;
		left=right=NULL;
	}
};

Node* insert(Node* root,int val){
	
	if(root==NULL){
		return new Node(val);
	}
	if(val>root->data)
		root->right=insert(root->right,val);
	else 
		root->left=insert(root->left,val);
		
	return root;
	
	
}
Node* buildBST(vector<int> arr){
	Node* root=NULL;
	for(int val: arr){
		root=insert(root,val);
	}
	
	
	return root;

}

void inOrder(Node* root){
	if(root==NULL){
		return;
	}
	inOrder(root->left);
	cout<<root->data<<" ";
	inOrder(root->right);
}
Node* inOrderSuccessor(Node* root){
	while( root!=NULL && root->left!=NULL){
		root=root->left;
	}
	return root;
	
}
Node* delNode(Node* root, int key){
	if(key>root->data){
		root->right=delNode(root->right,key);
	} else if (key<root->data){
		root->left=delNode(root->left,key);
	} else {
		// with 0 and 1 child case 
		if(root->left==NULL){
			Node* temp=root->right;
			delete root;
			return temp;
		} else if (root->right==NULL){
			Node* temp=root->left;
			delete root;
			return temp;
		}
		// 2 child case 
		
		Node* IS=inOrderSuccessor(root->right);
		root->data=IS->data;
		root->right=delNode(root->right,IS->data);
	}
	return root;
}

int main(){
	vector<int> arr={3,2,1,5,4,6};
	
	Node* root=buildBST(arr);
	 
	inOrder(root);
	cout<<endl;
	
	root=delNode(root,7);
	
	inOrder(root);
	
	
	return 0;
}
