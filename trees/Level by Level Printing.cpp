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
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right->left=new Node(6);	
	root->right->right=new Node(7);
	
	LBLprint(root);
	return 0;
}
