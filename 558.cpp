#include<bits/stdc++.h>
#define INF 99999
#define NIL -1
using namespace std;
int V,d[2005],pa[2005],m,n;
/*int Relax(int u,int v,int w[2005][2005])
{
    if(w[u][v] && d[v]>d[u]+w[u][v])
    {
        d[v]=d[u]+w[u][v];
        pa[v]=u;
        //cout<<"FROM int Relax()\n";
    }
}
int Initialize_Single_Source(int s)
{
    int v;
    for(v=0; v<n; v++)
    {
        d[v]=INF;
        pa[v]=NIL;
        //S[v]=false;
        //cout<<"FROM int ISS\n";
    }
    d[s]=0;
}
bool Bellman_Ford(int w[2005][2005],int s)
{
    int i,u,j;
    Initialize_Single_Source(s);
    for(i=0; i<n-1; i++)
    {
        for(u=0; u<n; u++)
        {
            for( j=1; j<n; j++)
            {
                Relax(u,j,w);
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<n; j++)
        {
            if(d[j]>d[i]+w[i][j])
            {
                return false;
            }
        }
    }
    return true;
}*/
int main()
{
    int t,w[2005][2005];
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=0; i<n; i++)
        {
            int x,y,z;
            cin>>x>>y>>z;
            w[x][y]=z;
        }
        bool ans;
        //ans=Bellman_Ford(w,0);
        if(ans==true)
        {
            cout<<"no negative\n";
        }
        else
        {
            cout<<"negative\n";
        }
        return 0;
    }
}
