#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<string>ss;
bool check(string s1,string s2)
{
    if(s1>s2)
    //if(s1.length()>s2.length())
    {
        return false;
    }
    for(ll j=0;j<s1.length();j++)
    {
        if(s1[j]!=s2[j])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    //freopen("644out.txt","w+",stdout);
    ll sett=1;
    string s;
    while(cin>>s)
    {
        ss.clear();
        ss.push_back(s);
        while(1)
        {
            cin>>s;
            if(s=="9")
                break;
            ss.push_back(s);
        }
        bool ans =true;
        sort(ss.begin(),ss.end());
        for(ll i=1;i<ss.size();i++)
        {
            if(check(ss[i-1],ss[i]))
            {
                ans=false;
                break;
            }
        }
        if(ans)
        {
            cout<<"Set "<<sett++<<" is immediately decodable\n";
        }
        else
        {
            cout<<"Set "<<sett++<<" is not immediately decodable\n";
        }
    }
    return 0;
}
