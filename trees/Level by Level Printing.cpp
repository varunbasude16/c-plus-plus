#include<iostream>
#include<queue>
using namespace std;
struct Node{
	int data;
	Node* right;
	Node* left;
	
	Node(int value){
		data=value;
		left=NULL;
		right=NULL;
	}
};
Node* insert(Node* root, int value){
	Node* newNode=new Node(value);
	if(root==NULL){
		root=newNode;
		return root;
	}
	
	queue<Node*> q;
	q.push(root);
	
	while(q.size()>0){
		Node* temp=q.front();
		q.pop();
		
		if(temp->left==NULL){
			temp->left=newNode;
			return root;
		}else {
			q.push(temp->left);
		}
		if(temp->right==NULL){
			temp->right=newNode;
			return root;
		}else {
			q.push(temp->right);
		}
		
	}
	return root;
	
}
void LBLprint(Node* root){
	queue<Node*> q;
	q.push(root);
	q.push(NULL);
	while(q.size()>0){
		Node* curr=q.front();
		q.pop();
		
		
		if(curr==NULL){
			if(!q.empty()){
				cout<<endl;
				q.push(NULL);
				continue;
			} else {
				break;	
			}
			
			
		}
	    cout<<curr->data<< " ";	
		
		if(curr->left!=NULL)
			q.push(curr->left);
		if(curr->right!=NULL)
			q.push(curr->right);
	}
	
}


int main(){
	Node* root=new Node(1);
//	root->left=new Node(2);
//	root->right=new Node(3);
//	root->left->left=new Node(4);
//	root->left->right=new Node(5);
//	root->right->left=new Node(6);	
//	root->right->right=new Node(7);

	root=insert(root,2);
	root=insert(root,3);
	root=insert(root,4);	
	root=insert(root,5);
	root=insert(root,6);
	root=insert(root,7);	
	
	LBLprint(root);
	return 0;
}
