#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;
class Graph {
	int V;
    list<int> *adj;
    public:
    Graph(int v) {
    	V = v;
        adj = new list<int>[v];
    }
    void addEdge(int v, int e) {
		adj[v].push_back(e);
	}
    void BFS(int v) {
		vector<bool> visited(v, false);
		queue<int> q;
        visited[v] = true;
        q.push(v);
        while(!q.empty()) {
			int V = q.front();
			q.pop();
			cout<<" "<<V;
            for(auto it = adj[V].begin(); it != adj[V].end(); it++) {
				if(visited[*it] == false) {
					visited[*it] = true;
					q.push(*it);
				}
			}
		}
	}
};
int main() {
    // Create a graph with 4 vertices
	Graph *graph = new Graph(4);
  	graph->addEdge(0, 1);
 	graph->addEdge(0, 2);
 	graph->addEdge(1, 2);
 	graph->addEdge(2, 0);
 	graph->addEdge(2, 3);
 	graph->addEdge(3, 3);
    graph->BFS(2);
	return 0;
}
