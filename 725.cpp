#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("725out.txt","w+",stdout);
    long long f,a,s=0;
    while(1)
    {
        long long n,here=0;
        cin>>n;
        if(n==0)
            break;
        if(s!=0)
            cout<<"\n";
        s=1;
        for(f=01234;f<=98765/n;f++)
        {
            long long tmp,u=(f<10000);
            a=f*n;
            tmp=a;
            while(tmp)
            {
                u|=1<<(tmp%10);
                tmp=tmp/10;
            }
            tmp=f;
            while(tmp)
            {
                u|=1<<(tmp%10);
                tmp=tmp/10;
            }
            if(u==(1<<10)-1)
            {
                if(f<=9999)
                    cout<<a<<" / 0"<<f<<" = "<<n<<"\n";
                else
                    cout<<a<<" / "<<f<<" = "<<n<<"\n";
                here=1;
            }
        }
        if(here==0)
        {
            cout<<"There are no solutions for "<<n<<".\n";
        }
    }
    return 0;
}
