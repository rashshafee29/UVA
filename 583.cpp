#include<bits/stdc++.h>
#define ll long long
//using namespace std;
#include<bitset>
//#define ll long long
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
vector<ll> primefactors(ll N)
{
    vector<ll> factors;
    ll pf_indx=0,pf=primes[pf_indx];
    while(pf*pf<=N)
    {
        while(N%pf==0)
        {
            N/=pf;
            factors.push_back(pf);
        }
        pf=primes[++pf_indx];
    }
    if(N!=1)
        factors.push_back(N);
    return factors;
}
ll factorNumber(ll n)
{
    ll pfindx=0, pf=primes[pfindx], ans=0;
    while(pf*pf<=n)
    {
        while(n%pf==0)
        {
            n/=pf;
            ans++;
        }
        pf=primes[++pfindx];
    }
    if(n!=1)
        ans++;
    return ans;
}
ll numDiv(ll n)
{
    ll pfindx=0,pf=primes[pfindx],ans=1;
    while(pf*pf<=n)
    {
        ll power =0;
        while(n%pf==0)
        {
            n=n/pf;
            power++;
        }
        ans=ans*(power+1);
        pf=primes[++pfindx];
    }
    if(n!=1)
        ans=ans*2;
    return ans;
}
ll sumDiv(ll n)
{
    ll pfindx=0,pf=primes[pfindx],ans=1;
    while(pf*pf<=n)
    {
        ll power=0;
        while(n%pf==0)
        {
            n=n/pf;
            power++;
        }
        ans*=((ll)pow((double)pf,power+1.0)-1)/(pf-1);
        pf=primes[++pfindx];
    }
    if(n!=1)
        ans*=((ll)pow((double)n,2.0)-1)/(n-1);
    return ans;
}
ll eulerPhi(ll n)
{
    ll pfindx=0,pf=primes[pfindx],ans=n;
    while(pf*pf<=n)
    {
        if(n%pf==0)
            ans-=ans/pf;
        while(n%pf==0)
            n/=pf;
        pf=primes[++pfindx];
    }
    if(n!=1)
        ans-=ans/n;
    return ans;
}
int main()
{
    sieve(10000000);
    //freopen("583out.txt","w+",stdout);
    ll i,n;
    while(1)
    {
        //sieve(10000000);
        cin>>n;
        if(n==0)
            break;
        cout<<n<<" = ";
        if(n<0)
        {
            cout<<"-1 x ";
        }
        ll last;
        vector<ll>r = primefactors(abs(n));
        //vector<ll> :: iterator i;
        for ( i = 0; i<r.size()-1; i++)
            //for ( i = r.begin(); i != r.end(); i++)
        {
            if(i==r.size()-1)
            {
                last=r[i];
            }
            printf("%lld x ", r[i]);
        }
        cout<<r[r.size()-1]<<"\n";
    }
    return 0;
}
