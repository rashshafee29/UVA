#include<iostream>
#include<cstdio>
#include<vector>
#define tt 1000000
using namespace std;
int main()
{
    long long i,j;
    bool isprime[tt];
    vector<long long>primes;
    fill(isprime,isprime+tt,true);
    for(i=1;i<=tt/2;i=i+1)
    {
        isprime[2*i]=false;
    }
    isprime[0]=false;
    isprime[1]=false;
    isprime[2]=true;
    for(i=3;i<=tt;i=i+2)
    {
        if(isprime[i])
        {
            if(i<=tt/2)
                primes.push_back(i);
            for(j=2;j*i<=tt;j=j+1)
            {
                isprime[j*i]=false;
            }
        }
    }
    long long n,a,b;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        long long h,f=0;
        for(h=0;primes[h]<=n;h++)
        {
            a=primes[h];
            b=n-primes[h];
            if(isprime[b])
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            printf("%lld = %lld + %lld\n",n,a,b);
        }
        else
        {
            printf("Goldbach's conjecture is wrong.\n");
        }
    }
    return 0;
}
