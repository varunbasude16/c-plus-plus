#include<iostream>
using namespace std;
#include<list>
#include<vector>

class Graph{
	int V;
	vector<vector<int> > adjmatrix;
	list<int> *l;
public:
	Graph(int V): adjmatrix(V,vector<int>(V,0)) {
		this->V=V;
		
		l=new list<int> [V];
	}
	
	void addEdge(int u, int v){
		
		adjmatrix[u][v]=1;		
		adjmatrix[v][u]=1;
		l[u].push_back(v);
		l[v].push_back(u);
	}
	void printAdjList(){
		for(int i=0;i<V;i++){
			cout<< i << ":";
			for( int val: l[i])
				cout<<val<<" ";
			cout<<endl;
		}
	}
	void printAdjMatrix(){
		for(int i=0;i<V;i++){
			for(int j=0;j<V;j++)
				cout<<adjmatrix[i][j]<< " ";
			cout<<endl;
		}
		
	}
};

int main(){
	Graph g(5);
	
	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(1,3);
	g.addEdge(2,3);
	g.addEdge(2,4);
	
	g.printAdjList();
	g.printAdjMatrix();
	
	return 0;
}

