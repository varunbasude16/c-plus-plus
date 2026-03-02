#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};
class linkedlist{
	private:
		Node* head;
	public:
		linkedlist(){
			head=NULL;
		}
		void display(){
			Node* temp=head;
			while(temp!=NULL){
				cout<<temp->data<<"->";
				temp=temp->next;
			}
			cout<<"end\n";
		}
		void insert(int value)
		{
			Node* newNode=new Node();
			newNode->data=value;
			newNode->next=head;
			head=newNode;
		}
		int Sum(){
			Node* temp=head;
			int count=0;
			while(temp->next!=NULL)
			{
				temp=temp->next;
				count++;
			}
			Node* mid=head;
			for(int i=1;i<=(count/2);i++){
				mid=mid->next;
			}
			return (head->data)+(mid->data)+(temp->data);
			
		}
};
int main(){
	linkedlist L;
	L.insert(1);
	L.insert(1);
	L.insert(1);
	L.insert(1);
	L.insert(1);
	L.insert(1);
	L.display();
	
	int total=L.Sum()/3;
	cout<<"sum is "<<total;
	return 0;
}
