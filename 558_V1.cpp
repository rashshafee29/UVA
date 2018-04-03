#include<bits/stdc++.h>
using namespace std;
struct cost
{
    int x;
    int y;
    int t;
} cc[2005];
int main()
{
    int tc,n,m;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>m;
        for(int i=0; i<m; i++)
        {
            cin>>cc[i].x>>cc[i].y>>cc[i].t;
        }
        int d[1005];
        for(int i=0; i<n; i++)
        {
            d[i]=999999;
        }
        d[0]=0;
        for(int i=0; i<n-1; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(d[cc[j].y]>d[cc[j].x]+cc[j].t)
                {
                    d[cc[j].y]=d[cc[j].x]+cc[j].t;
                }
            }
        }
        bool ans=true;
        for(int q=0; q<m; q++)
        {
            if(d[cc[q].y]>d[cc[q].x]+cc[q].t)
            {
                ans=false;
                break;
            }
        }
        if(ans)
            cout<<"not possible\n";
        else
            cout<<"possible\n";
    }
    return 0;
}
