#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("483output.txt", "w+", stdout);
    int l,i,ll,f=0;
    char s[10000];
    char *ss;
    vector<char>cc;
    while(gets(s))
    {
        l=strlen(s);
       // cout<<"---->string"<<s<<"\n";
        ss=strtok(s," ");

        //i=0;
        while(ss!=NULL)
        {
            cc.clear();
            i=0;
            ll=strlen(ss);
            //cout<<"->"<<ll;
            f=f+ll+1;
            while(i<ll)
            {
                cc.push_back(ss[i]);
                //cout<<"->"<<ss[i];
                i++;
            }
            reverse(cc.begin(),cc.end());
            i=0;
            while(i<ll)
            {
                cout<<cc[i];
                i++;
            }
            cout<<" ";
            //cc.clear();
            ss=strtok(NULL," ");
           // f++;
        }
       // cout<<"->>"<<f;
        //cout<<" ";
        //cc.clear();
        //cout<<ss;
        if(f==l)
            cout<<"\n";
        f=0;
    }
    return 0;
}
