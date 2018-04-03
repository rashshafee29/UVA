#include<bits/stdc++.h>
#include<bitset>
#define ll long long

using namespace std;
ll _sievesize;
bitset<10000010>bs;
vector<ll> primes;
void sieve(ll upbnd)
{
    _sievesize=upbnd+1;
    bs.set();
    bs[0]=bs[1]=0;
    for(ll i=2; i<=_sievesize; i++)
    {
        for(ll j=i*i; j<=_sievesize; j+=i)
            bs[j]=0;
        primes.push_back((ll)i);
    }
}
bool isPrime(ll N)
{
    if(N<=_sievesize)
        return bs[N];
    for (ll i = 0; i < (ll)primes.size(); i++)
        if (N % primes[i] == 0)
            return false;
    return true;
}
int main()
{
    //freopen("543output.txt","w+",stdout);
    sieve(1000000);
    /*vector<ll>:: iterator it;
    for(it=primes.begin();it!=primes.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<isPrime(10);*/
    ll n;
    while(1)
    {
        ll s1,s2,f=0;
        cin>>n;
        if(n==0)
            break;
        vector<ll>storingPrime;
        for(ll k=2;k<=n;k++)
        {
            if(isPrime(k))
                storingPrime.push_back(k);
        }
        for(ll v=0;v<storingPrime.size();v++)
        {
            if(isPrime(n-storingPrime[v]))
            {
                s1=storingPrime[v];
                s2=n-storingPrime[v];
                f=1;
                break;
            }
        }
        if(f==1)
        {
            cout<<n<<" = "<<s1<<" + "<<s2<<"\n";
        }
        else
            cout<<"Goldbach's conjecture is wrong.\n";
    }
    return 0;
}
