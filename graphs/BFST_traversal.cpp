#include<iostream>
#include<queue>

#include<list>
using namespace std;

class Graph{
    int V;
    list<int> *l;

public:
    Graph(int V){
        this->V=V;
        l=new list<int> [V];     
    }
    void addEdge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
    void BFS(int s){
       
       int vis[V]={0};
        queue<int> q;

        q.push(s);
        vis[s]=1;

        while(!q.empty()){
            int u=q.front();
            q.pop();
            cout<<u<<" ";
            for(int v:l[u]){
                if(!vis[v]){
                    q.push(v);
                    vis[v]=1;
                }
            }
        }
    }
};
int main(){
    Graph g(5);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,4);
    

    g.BFS(0);
  
    
    return 0;
}
