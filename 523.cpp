#include<bits/stdc++.h>
#define NIL -11
using namespace std;
int cost[100][100], tax[100],pa[100][100];
int print_path(int i,int j)
{
    if(i==j)
        cout<<i;
    else if(pa[i][j]!=NIL)
    {
        print_path(i,pa[i][j]);
        cout<<"-->"<<j;
    }
}
int main()
{
    //freopen("523out.txt","w+",stdout);
    int t,i,k,j;
    cin>>t;
    for(int tt=1; tt<=t; tt++)
    {
        cout<<"\n";
        for(i=1; i<=5; i++)
        {
            for(j=1; j<=5; j++)
            {
                cin>>cost[i][j];
                if(i==j)
                    pa[i][j]=NIL;
                else if(cost[i][j]==-1)
                {
                    cost[i][j]=999999;
                    pa[i][j]=NIL;
                }
                else
                    pa[i][j]=i;
            }
        }
        for(k=1; k<=5; k++)
            cin>>tax[k];
        for(k=1; k<=5; k++)
        {
            for(i=1; i<=5; i++)
            {
                for(j=1; j<=5; j++)
                {
                    if(cost[i][j]>(cost[i][k]+cost[k][j]+tax[k]))
                    {
                        pa[i][j]=pa[k][j];
                        cost[i][j]=cost[i][k]+cost[k][j]+tax[k];
                    }
                }
            }
        }
        int x,y,b;
        for(b=1; b<=3; b++)
        {
            cin>>x>>y;
            cout<<"From "<<x<<" to "<<y<<" :\nPath: ";
            print_path(x,y);
            cout<<"\nTotal cost : "<<cost[x][y]<<"\n\n";
        }
    }
    return 0;
}
