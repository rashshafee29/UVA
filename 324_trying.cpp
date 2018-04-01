#include<bits/stdc++.h>
#define L 10000
#define ll long long
using namespace std;
ll l;
//vector<ll>fact;
//ll fact[L];
/*void mult(ll n,ll fact[L])
{
    ll i,c=0;
    ll arr[L];
    for(i=0; i<=l; i++)
    {
        arr[i]=fact[i];
    }
    for(i=0; i<=l; i++)
    {
        fact[i] = (arr[i]*n + c)%10;
        c = (arr[i]*n+ c)/10;
    }
    if(c!=0)
    {
        while(c!=0)
        {
            fact[i]=c%10;
            c= c/10;
            i++;
        }
    }
    l=i-1;
}
void find_factorial(ll n,ll fact[L])
{
    ll i;
    for(i=2; i<=n; i++)
    {
        mult(i,fact);
    }
}*/
int main()
{
    //freopen("324out.txt","w+",stdout);
    while(1)
    {
        ll fact[L];
        ll  ans[15];
        memset(ans,0,sizeof(ans));
        ll x;
        cin>>x;
        if(x==0)
            break;
        fact[0]=1;

        // find_factorial(x,fact);
        ll i;
        for(i=2; i<=x; i++)
        {
            ll j,c=0;
            ll arr[L];
            for(j=0; j<=l; j++)
            {
                arr[j]=fact[j];
            }
            for(j=0; j<=l; j++)
            {
                fact[j] = (arr[j]*i + c)%10;
                c = (arr[j]*i+ c)/10;
            }
            if(c!=0)
            {
                while(c!=0)
                {
                    fact[j]=c%10;
                    c= c/10;
                    j++;
                }
            }
            l=j-1;
            //mult(i,fact);
        }

        //printf("100!= ");
        for(i=l; i>=0; i--)
        {
            ans[fact[i]]++;
        //printf("%d",fact[i]);
        }
        //fact.clear();
        //memset(fact,0,sizeof(fact));
        l=0;
        cout<<x<<"! --\n";
        printf("   (0)%5lld",ans[0]);
        for(ll c=1;c<=4;c++)
        {
            printf("    (%lld)%5lld ",c,ans[c]);
            //cout<<" ("<<c<<") "<<ans[c];
        }
        cout<<"\n";
        printf("   (5)%5lld",ans[5]);
        for(ll c=6;c<=9;c++)
        {
            printf("    (%lld)%5lld ",c,ans[c]);
            //cout<<" ("<<c<<") "<<ans[c];
        }
        cout<<"\n";
    }
    return 0;
}
