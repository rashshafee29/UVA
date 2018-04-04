#include<bits/stdc++.h>
using namespace std;
bool adj[1000][1000];
int E,r[1000],d[1000],f[1000],color[1000],time_,l[1000][1000],c[1000];
const int inf=9999999;
const int W=1,G=2,N=-1,B=3;///B-black,W-white,N-nil,G-gray
int DFS_Visit(int u,int V,int p)
{
    //time_=time_+1;
   // d[u]=time_;
    color[u]=G;//Visited
    //if p=c[i];
    if(p<0)
        c[u]=0;
    else
        c[u]=(p+1)%2;//1 hobe na cz abar 1 niye asle seta source hobe that means 0

    int v;
    for(v=0; v<V; v++)
    {
        if(color[v]==W && adj[u][v]==true)
        {
            r[v]=u;
            DFS_Visit(v,V,c[u]);
        }
    }
    //color[u]=B;
   // time_=time_+1;
   // f[u]=time_;
}
int DFS(int V)
{
    int u;
    for(u=0; u<V; u++)
    {
        color[u]=W;//not visited
        c[u]=-1;
        r[u]=N;
    }
    //time_=0;
    for(u=0; u<V; u++)
    {
        if(color[u]==W)
        {
            //p=c[u];
            DFS_Visit(u,V,c[u]);
        }
    }
}
int main()
{
    int V;
    //cout<<"How many Vertex and edge:";
    while(1)
    {
        cin>>V;
        if(V==0)
            break;
        cin>>E;
        for(int e1=0;e1<E;e1++)
        {
            for(int e2=0;e2<E;e2++)
            {
                adj[e1][e2]=false;
            }
        }
        int i,u,v;
        //cout<<"How they connected:\n";
        for(i=0; i<E; i++)
        {
            cin>>u>>v;
            adj[u][v]=true;
            adj[v][u]=true;
            l[i][0]=u;
            l[i][1]=v;
        }
        DFS(V);
        bool ss=true;
        for(i=0; i<E; i++)
        {
            cout<<c[l[i][0]]<<"<->"<<c[l[i][1]]<<"\n";
            if(c[l[i][0]]==c[l[i][1]])
            {
                ss=false;
                break;
            }
        }
        cout<<"CC:";
        for(i=0; i<E; i++)
            cout<<c[i]<<" ";
        if(ss)
        {
            cout<<"BICOLORABLE.\n";
        }
        else
        {
            cout<<"NOT BICOLORABLE.\n";
        }
    }
    return 0;
}
