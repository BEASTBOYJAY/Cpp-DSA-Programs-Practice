#include <bits/stdc++.h>
using namespace std;
class Graph
{
    public:
    map <int ,bool> visited;
    map <int ,list<int>> adj;

    void Addedge(int v,int w);
    void DFS(int s);
};

void Graph::Addedge(int v,int w)
{
    adj[v].push_back(w);
}

void Graph::DFS(int s)
{
    visited[s]=true;
    cout<<s<<" ";

    list<int>::iterator i;
    for(i=adj[s].begin();i!=adj[s].end();++i)
    {
        if(!visited[*i])
        {
            DFS(*i);
        }
    }
}

int main()
{
    Graph g;
    g.Addedge(0,1);
    g.Addedge(0,2);
    g.Addedge(0,3);
    g.Addedge(1,3);
    g.Addedge(2,4);
    g.Addedge(3,5);
    g.Addedge(3,6);
    g.Addedge(4,5);
    g.Addedge(4,7);
    g.Addedge(5,2);
    cout<<"DFS traversal shown below"<<endl;
    g.DFS(0);
}