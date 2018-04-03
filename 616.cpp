#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("616out.txt","w+",stdout);
    while(1)
    {
        int n;
        cin>>n;
        if(n<0)
            break;
        bool fas=false;
        int ans,sqn,i,j;
        sqn=sqrt(n);
        cout<<n<<" coconuts, ";
        for(i=sqn+1; i>=2; i--)
        {
            ans=n;
            for(j=1; j<=i; j++)
            {
                if(ans%i!=1)
                    break;
                ans=ans-ans/i-1;
            }
            if(j==i+1 && ans%i==0)
            {
                fas=true;
                cout<<i<<" people and 1 monkey\n";
                break;
            }
        }
        if(fas==false)
        {
            cout<<"no solution\n";
        }
    }
    return 0;
}
