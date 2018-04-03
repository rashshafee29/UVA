#include<bits/stdc++.h>
using namespace std;
queue<string>Q;
string src,dest,adj[100][100],r[100];
int V,E,d[100],color[100];
char N=-1;
const int inf=9999999;
const int W=1,G=2,B=3;///B-black,W-white,N-nil,G-gray
void Print_path(string s,string pv)
{
    if(pv==s)
        cout<<s;
    else if(r[pv]==N)
    {
        cout<<"No path from "<<s<<"to "<<pv<<"exists";
    }
    else
    {
        Print_path(s,r[pv]);
        cout<<"->"<<pv;
    }
}
void mine_BFS(int s)
{
    int u,v;
    for(u=1;u<=E;u++)
    {
        color[u]=W;
        d[u]=inf;
        r[u]=N;
    }
    src=1;
    color[1]=G;
    d[1]=0;
    //r[s]=N;
    Q.push(s);
    while(Q.size()!=0)
    {
        u=Q.front();
        Q.pop();
        for(v=1;v<=E;v++)
        {
            if(color[v]==W && adj[u][v]==1)
            {
                color[v]=G;
                d[v]=d[u]+1;
                r[v]=u;
                Q.push(v);
            }
        }
        color[u]=B;
    }
}
int main()
{
    //cout<<"Enter vertex and edge number:";
    cin>>E;
    int i;
    string u,v;
    //cout<<"Enter connecting vertex:\n";
    for(i=1;i<=E;i++)
    {
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    cin>>src>>dest;
    mine_BFS(1);
    cout<<"Shortest path: ";
    Print_path(src,dest);
    return 0;
}

