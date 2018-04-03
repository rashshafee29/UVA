#include<bits/stdc++.h>
using namespace std;
queue<int>Q;
bool adj[105][105];
int V,E,r[105],d[105],color[105],st,en;
//const int inf=9999999;
const int visited=1,not_visited=0;
void mine_BFS()
{
    int u,v;

    color[st]=1;
    d[st]=0;
    //r[s]=N;
    Q.push(st);
    while(Q.size()!=0)
    {
        u=Q.front();
        Q.pop();
        for(v=1; v<=20; v++)
        {
            if(color[v]==0 && adj[u][v]==true)
            {
                color[v]=1;
                d[v]=d[u]+1;
                r[v]=u;
                Q.push(v);
            }
        }
        //color[u]=B;
    }
}
int main()
{
    //freopen("567input.txt","r+",stdin);
    //freopen("567output.txt","w+",stdout);
    int v,i,j,t=1,n=1,in;
    while((scanf("%d",&in))==1)
    {
        for(i=1;i<=in;i++)
        {
            cin>>v;
            adj[n][v]=true;
            adj[v][n]=true;
        }
        n++;
        if(n==20)
        {
            n=1;
            cin>>V;
            cout<<"Test Set #"<<t++<<"\n";
            for(j=1;j<=V;j++)
            {
                cin>>st>>en;
                mine_BFS();
                printf("%2d to %2d: %d\n",st,en,d[en]);
                memset(color,0,sizeof(color));
                memset(d,0,sizeof(d));
            }
            cout<<"\n";
            memset(adj,false,sizeof(adj));
        }
        //t++;
    }
    return 0;
}
