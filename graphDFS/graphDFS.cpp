#include<iostream>
#include<list>
#include<vector>

using namespace std;

class Graph {
    int V;
    list<int> *adj;
    vector<bool> visited;
    public:
    Graph(int v) {
        V = v;
        adj = new list<int>[v];
        visited.resize(v, false);
    }
    void addEdge(int v, int w) {
        adj[v].push_back(w);
    }
    void DFS(int v) {
       visited[v] = true; 
       cout<<" "<<v;
       for(auto it = adj[v].begin(); it != adj[v].end(); it++) {
            if(visited[*it] == false) {
                    DFS(*it);
            }
       }
    }
};
int main() {
    Graph *g = new Graph(4);
    g->addEdge(0,1);
    g->addEdge(0,2);
    g->addEdge(1,2);
    g->addEdge(2,0);
    g->addEdge(2,3);
    g->addEdge(3,3);
    g->DFS(1);
    return 0;
}
