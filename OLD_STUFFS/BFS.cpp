#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int v;
    vector <list<int>> adj;
    public:
    Graph(int v);
    void Addedges(int v,int w);
    void BFS(int s);
};

Graph::Graph(int v)
{
    this->v=v;
    adj.resize(v);
}

void Graph::Addedges(int v,int w)
{
    adj[v].push_back(w);
}

void Graph::BFS(int s)
{
    vector<bool> visited;
    visited.resize(v,false);

    list<int> queue;
    visited[s]=true;
    queue.push_back(s);

    while (!queue.empty())
    {
        s=queue.front();
        cout<<s<<" ";
        queue.pop_front();
    

        for(auto adjacent:adj[s])
        {
            if(!visited[adjacent])
            {
                visited[adjacent]=true;
                queue.push_back(adjacent);
            }
        }
    }
}

int main()
{
    Graph g(8);
    g.Addedges(0,1);
    g.Addedges(0,2);
    g.Addedges(0,3);
    g.Addedges(1,3);
    g.Addedges(2,4);
    g.Addedges(3,5);
    g.Addedges(3,6);
    g.Addedges(4,5);
    g.Addedges(4,7);
    g.Addedges(5,2);

    cout<<"BFS traversal"<<endl;
    g.BFS(0);
    return 0;
}