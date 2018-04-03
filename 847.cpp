#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    while(cin>>n)
    {
        long long p,c=0;
        p=1;
        bool f=true;
        while(p<n)
        {
            if(!f)
            {
                p=p*2;
                f=true;
            }
            else
            {
                p=p*9;
                f=false;
            }
        }
        if(!f)
        {
            cout<<"Stan wins.\n";
        }
        else
        {
            cout<<"Ollie wins.\n";
        }
    }
    return 0;
}
