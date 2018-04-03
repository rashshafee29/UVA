#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#define ll long long

using namespace std;
ll _sievesize;
vector<ll> primes;
bool isPrime(ll N)
{
    /*if(N<=_sievesize)
        return bs[N];
    for (ll i = 0; i < (ll)primes.size(); i++)
        if (N % primes[i] == 0)
            return false;
    return true;*/
    ll f=0;
    if(N<=1)
        return false;
    for(ll i=2; i*i<=N; i++)
    {
        if(N % i==0)
        {
            f=1;
            break;
        }
    }
        if(f==1)
            return false;
        else
            return true;
}
int main()
{
    //freopen("543output.txt","w+",stdout);
    ll n;
    while(1)
    {
        ll s1,s2,f=0;
        cin>>n;
        if(n==0)
            break;
        map<ll,ll>pmp;
        vector<ll>storingPrime;
        pmp[2]=1;
        for(ll k=3; k<=n; k=k+2)
        {
            if(isPrime(k))
            {
               // cout<<k<<" ";
                pmp[k]=1;
                storingPrime.push_back(k);
            }
        }
        for(ll v=0; v<storingPrime.size(); v++)
        {
            if(pmp[n-storingPrime[v]]==1)
            {
                s1=storingPrime[v];
                s2=n-storingPrime[v];
                f=1;
                break;
            }
        }
        if(f==1)
        {
            printf("%lld = %lld + %lld\n",n,s1,s2);
            //cout<<n<<" = "<<s1<<" + "<<s2<<"\n";
        }
        else
            printf("Goldbach's conjecture is wrong.\n");
            //cout<<"Goldbach's conjecture is wrong.\n";
        pmp.clear();
        storingPrime.clear();
        //cout<<isPrime(39);
    }
    return 0;
}
