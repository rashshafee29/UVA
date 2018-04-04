#include<bits/stdc++.h>
using namespace std;
queue<int>Q;
bool adj[100][100];
int V,E,r[100],d[100],color[100];
const int inf=9999999;
const int W=1,G=2,N=-1,B=3;///B-black,W-white,N-nil,G-gray
void mine_BFS(int s)
{
    int u,v;
    for(u=0; u<E; u++)
    {
        color[u]=W;
        d[u]=inf;
        r[u]=N;
    }
    color[s]=G;
    d[s]=0;
    //r[s]=N;
    Q.push(s);
    while(Q.size()!=0)
    {
        u=Q.front();
        Q.pop();
        for(v=0; v<E; v++)
        {
            if(color[v]==W && adj[u][v]==true)
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
    int nn,aa;
    cin>>E;
    for(int ii=0; ii<E; ii++)
        for(int jj=0; jj<E; jj++)
            adj[ii][jj]=false;
    for(int ii=0; ii<E; ii++)
    {
        cin>>nn;
        for(int jj=0; jj<nn; jj++)
        {
            cin>>aa;
            adj[ii][aa]=true;
            adj[aa][ii]=true;
        }
    }
    int t,cc,i;
    cin>>t;
    while(t--)
    {
        cin>>cc;
        mine_BFS(cc);
        printf("Vertex Number:\n");
        for (i = 0; i < E; i++)
            printf("%4d", i);
        printf("\n");
        printf("Distance:\n");
        for (i = 0; i < E; i++)
            printf("%4d", d[i]);
        printf("\n");
    }

}
