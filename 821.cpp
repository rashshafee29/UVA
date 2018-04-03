#include<bits/stdc++.h>
#define INF 999999
using namespace std;
int main()
{
    int adj[110][110],arc[10000],ac,x,y,k,i,j,cc=1;
    while(1)
    {
        for(int t=1; t<=108; t++)
        {
            for(int tt=1; tt<=108; tt++)
            {
                adj[t][tt]=INF ;
            }
        }
        cin>>x>>y;
        if(x==0 && y==0)
            break;
        ac=0;
        while(1)
        {
            int f=0;
            if(x>y)
                arc[ac]=x;
            else
                arc[ac]=y;
            adj[x][y]=1;
            cin>>x>>y;
            if(x==0 && y==0)
            {
                break;
            }
            ac++;
        }
        int max=0;
        for(int u=0; u<ac; u++)
        {
            if(max<arc[u])
            {
                max=arc[u];
            }
        }
        //cout<<"MAX---->"<<max<<endl;
        for(k=1; k<=max; k++)
        {
            for(i=1; i<=max; i++)
            {
                for(j=1; j<=max; j++)
                {
                    if( adj[i][j]>adj[i][k]+adj[k][j])
                    {
                        adj[i][j]=adj[i][k]+adj[k][j];
                    }
                }
            }
        }
        int sum=0,c=0;
        for(int h=1; h<=max; h++)
        {
            for(int hh=1; hh<=max; hh++)
            {
                if(adj[h][hh]!=INF && h!=hh)
                {
                    sum=sum+adj[h][hh];
                    c++;
                }
            }
        }
        double ans;
        ans=(double)sum/(double)c;
        printf("Case %d: average length between pages = %.3f clicks\n",cc,ans);
        cc++;
    }
    return 0;
}

