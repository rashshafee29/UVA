#include<bits/stdc++.h>
using namespace std;
int m,cost[18][18],p[18][18],s;
bool fi;
/*int print_path(int i,int j)
{
    if(i==j)
        cout<<i;
    else if(p[i][j]!=-1)
    {
        print_path(i,p[i][j]);
        cout<<" "<<j;
    }
}*/
void print_path(int i,int j)
{
    if(p[i][j]==-1)
        if(fi)
        {
            cout<<i<<" "<<j;
            fi=false;
        }
        else
        {
            cout<<" "<<j;
        }
    else
    {
        print_path(i,p[i][j]);
        print_path(p[i][j],j);
    }
}
int main()
{
    //freopen("341in.txt","r+",stdin);
    //freopen("341out.txt","w+",stdout);
    int k,i,j,x,y,tt,q,m,n,cc=1;
    while(1)
    {
        fi=true;
        cin>>n;
        if(n==0)
            break;
        for(x=1;x<=16;x++)
        {
            for(y=1;y<=16;y++)
            {
                cost[x][y]=99999999;
                p[x][y]=-1;
            }
        }
        for(tt=1;tt<=n;tt++)
        {
            cin>>s;
            for(q=1;q<=s;q++)
            {
                cin>>m;
                cin>>cost[tt][m];
                //p[tt][m]=tt;
            }
        }
        for(k=1;k<=n;k++)
        {
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=n;j++)
                {
                    if(cost[i][j]>cost[i][k]+cost[k][j])
                    {
                        cost[i][j]=cost[i][k]+cost[k][j];
                        p[i][j]=k;
                    }
                }
            }
        }
        int sc,ds;
        cin>>sc>>ds;
        cout<<"Case "<<cc<<": Path = ";
        print_path(sc,ds);
        cout<<"; "<<cost[sc][ds]<<" second delay\n";
        cc++;
    }
    return 0;
}
