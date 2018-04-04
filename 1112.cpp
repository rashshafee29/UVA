#include<bits/stdc++.h>
#define pair pair<int,int>
#define INF 99999
#define NIL -1
using namespace std;
int n,V,d[100000],E,pa[10000],T;
struct comp
{
    bool operator()(const pair __x, pair __y) const
    {
        return __x.second > __y.second;
    }
};
priority_queue< pair, vector < pair >, comp > p;
vector< pair > g[100000];
int Initialize_Single_Source_Stl()
{
    int v;
    for(v=1; v<=n; v++)
    {
        d[v]=INF;
        pa[v]=NIL;
    }
    ///source=1;
    d[E]=0;
}
int Dijkstra_STL()
{
    int u,v,w,i,V_size;
    Initialize_Single_Source_Stl();
    p.push(pair(E,d[E]));///source=1;
    while(!p.empty())
    {
        u=p.top().first;
        p.pop();
        V_size=g[u].size();
        for(i=0; i<V_size; i++)
        {
            v=g[u][i].first;
            w=g[u][i].second;
            if(w<=T)
            {
                if(d[v]>d[u]+w)///Relax
                {
                    d[v]=d[u]+w;
                    pa[v]=u;
                    p.push(pair(v,d[v]));
                }
            }
        }
    }
}
/*int print_soln()
{
    int v;
    for(v=1; v<=n; v++)
    {
        cout<<v<<"\t\t"<<d[v]<<"\t\t"<<pa[v]<<"\n";
    }
}*/
int main()
{
    freopen("1112In.txt","r+",stdin);
   // freopen("1112out.txt","w+",stdout);
    int i,w,u,v,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>E;
        cin>>T;
        cin>>V;
        for(i=1; i<=V; i++)
        {
            cin>>u>>v>>w;
            g[u].push_back(pair(v,w));
            g[v].push_back(pair(u,w));
        }
        int ccc=0;
        Dijkstra_STL();
        for(int hh=1; hh<=n; hh++)
        {
            if(d[hh]<=T)
                ccc++;
        }
        cout<<ccc<<"\n";
        for(int k=0; k<=100000; k++)
        {
            g[k].clear();
        }
        if(t)
            cout<<"\n";
    }
    return 0;
}

