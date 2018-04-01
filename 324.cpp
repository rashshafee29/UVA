#include<bits/stdc++.h>
#define L 10000
#define ll long long
using namespace std;
ll l;
//vector<ll>fact;
//ll fact[L];
void mult(ll n,ll fact[L])
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
}
int main()
{
    while(1)
    {
        ll fact[L];
        ll  ans[15];
        ll x,i;
        cin>>x;
        if(x==0)
            break;
        fact[0]=1;

        find_factorial(x,fact);

        printf("100!= ");
        for(i=l; i>=0; i--)
        {
            printf("%d",fact[i]);
        }
        //fact.clear();
        memset(fact,0,sizeof(fact));
    }
    return 0;
}
