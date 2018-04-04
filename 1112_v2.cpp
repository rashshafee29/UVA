#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("1112In.txt","r+",stdin);
    freopen("1112out.txt","w+",stdout);
    int tc;
    cin>>tc;
    for(int cc=1;cc<=tc;cc++)
    {
        int adj[300][300],n,e,m,t,u,v,w;
        cin>>n;
        cin>>e;
        cin>>t;
        cin>>m;
        n++;
        memset(adj, 63, sizeof adj);
        for(int i=1;i<=m;i++)
        {
            cin>>u>>v>>w;
            adj[u][v]=w;
        }
        for(int k=0;k<n;k++)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    adj[i][j]=min(adj[i][j],adj[i][k]+adj[k][j]);
                }
            }
        }
        int cccc=0;
        for(int i=0;i<n;i++)
        {
            if(adj[i][e]<=t || (i==e))
                cccc++;
        }
        cout<<cccc<<"\n";
        if(cc<tc)
            cout<<"\n";
    }
    return 0;
}
