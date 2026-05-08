#include <iostream>
#include <vector>
using namespace std;

class Graph {
    vector<vector<int> > adj;

public:

    void addVertex() {
        adj.push_back(vector<int>());
        cout << "Vertex " << adj.size() - 1 << " added." << endl;
    }

  
    void addEdge(int u, int v) {
        if (u >= adj.size() || v >= adj.size()) {
            cout << "Invalid vertices!" << endl;
            return;
        }

        adj[u].push_back(v);
        adj[v].push_back(u);   
        cout << "Edge added between " << u << " and " << v << endl;
    }

    // Display graph
    void display() {
        cout << "\nGraph Representation (Adjacency List):" << endl;
        for (int i = 0; i < adj.size(); i++) {
            cout << i << " -> ";
            for (int j = 0; j < adj[i].size(); j++) {
                cout << adj[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph g;

  
    g.addVertex();
    g.addVertex();
    g.addVertex();
    g.addVertex();

  
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 3);


    g.display();

    return 0;
}
