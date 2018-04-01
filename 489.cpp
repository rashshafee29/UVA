#include<bits/stdc++.h>
using namespace std;
int main()
{
    string is1;
    string is2;
    int n,i;
    //set<char>sm;
    map<char , char>sm;
    map<char , char>:: iterator x;
    map<char , char>sm1;
    map<char , char>:: iterator y;
    while(1)
    {
        cin>>n;
        if(n==-1)
            break;
        cin>>is1;
        cin>>is2;
        //x=sm.begin();
        for(i=0;i<is1.length();i++)
        {
            sm[is1[i]];
        }
        for(i=0;i<is2.length();i++)
        {
            sm1[is2[i]];
        }
        /*for(x=sm.begin();x!=sm.end();x++)
        {
            cout<<x->first;
        }
         for(y=sm1.begin();y!=sm1.end();y++)
        {
            cout<<y->first;
        }*/
        int f=0;
        y=sm1.begin();
        for(x=sm.begin();x!=sm.end();x++)
        {
            if((x->first)==(y->first))
            {
                f=1;
            }
            y++;
        }
        if(f==1)
            cout<<"Same";
    }
}
