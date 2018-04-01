#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("output_119.txt", "w", stdout);
    string n[15];
    string s,s1;
    int z,loc1,ln,i,j,loc,tk,m[100],tn,lj,f=0;
    while((scanf("%d",&ln))!=EOF)
    {
        if(f==1)
            cout<<"\n";
        memset(m,0,sizeof(m));
        for( i=1; i<=ln; i++)
        {
            cin>>n[i];
        }
       /* for( i=1; i<=ln; i++)
        {
            cout<<n[i]<<" "<<m[i]<<"\n";
        }*/
        for( i=1; i<=ln; i++)
        {
            cin>>s;
            for(j=1; j<=ln; j++)
            {
                if(n[j]==s)
                {
                    loc=j;
                    //cout<<"loc_---"<<loc<<"\n";
                    break;
                }
            }
            cin>>tk;

            cin>>tn;
            if(tn==0)
               {
                   continue;
               }
            m[loc]=m[loc]-tk+(tk%tn);
           // cout<<m[loc]<<"\n";

            for(z=1; z<=tn; z++)
            {
                cin>>s1;
                for(lj=1; lj<=ln; lj++)
                {
                    if(n[lj]==s1)
                    {
                        loc1=lj;
                        break;
                    }
                }
                m[loc1]=m[loc1]+tk/tn;
            }
        }
        for( i=1; i<=ln; i++)
        {
            cout<<n[i]<<" "<<m[i]<<"\n";
        }
        f=1;
    }
    return 0;
}
