#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    while(cin>>n)
    {
        string s;
        cin>>s;
        map<string,ll>mp;
        for(ll i=0;i<s.length()-n+1;i++)
        {
            string ss;
            ll ii=1;
            for(ll j=i;ii<=n;j++)
            {
                ss=ss+s[j];
                ii++;
            }
            mp[ss]=0;
        }
        ll mx=-1;
        for(ll i=0;i<s.length()-n+1;i++)
        {
            string ss;
            ll ii=1;
            for(ll j=i;ii<=n;j++)
            {
                ss=ss+s[j];
                ii++;
            }
            mp[ss]++;
            mx=max(mx,mp[ss]);
        }
        map<string,ll>:: iterator it;
        for(it=mp.begin();it!=mp.end();it++)
        {
            if(it->second==mx)
            {
                cout<<it->first<<"\n";
                break;
            }
        }
        //cout<<mx;
    }
    return 0;
}
