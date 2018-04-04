#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10005]= {0};
    int  t,i,n;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        int j=1;
        for(j=1; j<=n; j++)
        {
            if(j>9)
            {
                int mm,m;
                mm=j;
                while(mm)
                {
                    m=mm%10;
                    mm=mm/10;
                    a[m]++;
                   // a[mm]++;
                }
            }
            else
            {
                a[j]++;
            }
        }
        for(j=0; j<9; j++)
        {
            cout<<a[j]<<" ";
        }
        cout<<a[9]<<"\n";
        memset(a,0,sizeof(a));
    }
    return 0;
}
