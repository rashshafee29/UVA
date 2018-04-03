#include<bits/stdc++.h>
using namespace std;

int main()
{
    double ht,h,d,u,f,m;
    int x,i;
    while(1)
    {
        cin>>h>>u>>d>>f;
        if(h==0)
            break;
        ht=0.0;
        i=0;
        m=((u*f)/100.0);
        x=0;
        while(1)
        {
            i++;
            if(u>0)
            {
            ht=ht+u;
            }
            u=(u-m);

            //cout<<"ht-----"<<ht<<u-(u*(f/100.0))<<"\n";
             //break;

            if(ht>h)
            {
                x=2;
                break;
            }
            ht=ht-d;
            if(ht<0)
            {
              x=1;
              break;
            }
        }
        if(x==1)
        {
            cout<<"failure on day "<<i<<"\n";
        }
        if(x==2)
        {
            cout<<"success on day "<<i<<"\n";
        }
    }
    return 0;
}

