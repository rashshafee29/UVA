#include<bits/stdc++.h>
#define INF 9999999
#define NIL -1
using namespace std;
int n,V,d[1111][1111],pa[100],g[1011][1011];
typedef pair <int,int> ii;
typedef pair <int,ii> iii;

int dx[]= {1,-1,0,0};
int dy[]= {0,0,1,-1};

bool check(int x,int y)
{
    if( x<0 || x>=V || y<0 || y>=n ) return false;
    return true;
}
int Dijkstra_STL()
{
    priority_queue < iii , vector <iii> ,greater <iii> > pq;
    pq.push(make_pair(g[0][0],ii(0,0)));
    d[0][0]=g[0][0];
    while(!pq.empty())
    {
        iii pp2=pq.top();
        pq.pop();
        int dd,x,y;
        dd=pp2.first;
        x=pp2.second.first;
        y=pp2.second.second;
        for(int h=0;h<4;h++)
        {
            int nx,ny;
            nx=x+dx[h];
            ny=y+dy[h];
            if(check(nx,ny))
            {
                if( d[nx][ny]> d[x][y]+ g[nx][ny])
                {
                    d[nx][ny]=d[x][y]+g[nx][ny];
                    pq.push(make_pair(d[nx][ny],ii(nx,ny)));
                }
            }
        }
    }
}
int main()
{
    freopen("929out.txt","w+",stdout);
    int i,w,u,v,t,j;
    cin>>t;
    while(t--)
    {
        cin>>V;
        cin>>n;
        for(i=0; i<V; i++)
        {
            for(j=0;j<n; j++)
            {
                cin>>g[i][j];
                d[i][j]=INF;
            }
        }
        Dijkstra_STL();
        cout<<d[V-1][n-1]<<"\n";
    }
    return 0;
}
