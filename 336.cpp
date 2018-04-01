#include<bits/stdc++.h>
using namespace std;
queue<int>Q;
bool adj[500][500];
int V,E,r[1000],d[1000],color[1000];
const int inf=9999999;
const int W=1,G=2,N=-1,B=3;///B-black,W-white,N-nil,G-gray
void mine_BFS(int s)
{
    int u,v;
    for(u=1;u<=V;u++)
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
        for(v=1;v<=V;v++)
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
    int nn,cc=1;
    map<int,int>mp;
    while(1)
    {
        cin>>nn;
        if(nn==0)
            break;
        int mx=-1;
        mp.clear();
        for(int ii=1;ii<=nn;ii++)
        {
            int oo,pp;
            cin>>oo>>pp;
            mx=max(mx,oo);
            mx=max(mx,pp);
            mp[oo]=1;
            mp[pp]=1;
            adj[oo][pp]=true;
            adj[pp][oo]=true;
        }
        V=mx;
        int ans=0;
        while(1)
        {
            int src,ds;
            cin>>src>>ds;
            if(src==0 && ds==0)
            {
                break;
            }
            mine_BFS(src);
            for(int w=1;w<=V;w++)
            {
                if(d[w]>ds && mp[w]==1 && d[w]!=inf)
                {
                    ans++;
                }
            }
            memset(r,0,sizeof(r));
            memset(d,0,sizeof(r));
            memset(color,0,sizeof(r));
            cout<<"Case "<<cc<<": "<<ans<<" nodes not reachable from node "<<src<<" with TTL = "<<ds<<"."<<endl;
            ans=0;
            cc++;
        }
    }
    return 0;
}
