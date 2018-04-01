#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("Output445.txt","w+",stdout);
    long long l,i,sum=0,j;
    char s[1000005];
    while(gets(s))
    {
        l=strlen(s);
        for(i=0; i<l; i++)
        {
            if(s[i]>='1' && s[i]<='9')
            {
                sum=sum+(s[i]-'0');
            }
            else if(s[i]=='!')
                cout<<"\n";
            else if(s[i]=='b')
            {
                for(j=1;j<=sum;j++)
                {
                    cout<<" ";
                }
                sum=0;
                continue;
            }
            else if(s[i]=='*')
            {
                for(j=1;j<=sum;j++)
                {
                    cout<<"*";
                }
                sum=0;
                continue;
            }
            else
            {
                for(j=1;j<=sum;j++)
                {
                    cout<<s[i];
                }
                sum=0;
            }
        }
        cout<<"\n";
    }
    return 0;
}
