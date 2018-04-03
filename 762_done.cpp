#include<bits/stdc++.h>
using namespace std;
map<string,string>parents;
map<string,int>visit;
map<string,vector<string> > in;
int flag=0;
string a1,a2;
void print_762(string a,string b)
{
    if(a==b)
        {return;}
    print_762(parents[a],b);
    cout<<parents[a]<<" "<<a<<"\n";
}
int bfs762()
{
    string get,get_in_v;
    int in_size;
    queue<string> ss;
    visit[a1]=-1;
    ss.push(a1);
    while(ss.size()!=0)
    {
        get=ss.front();
        ss.pop();
        if(get==a2)
        {
            //flag=88;
            return visit[get];
        }
        in_size=in[get].size();
        int i;
        for(i=0; i<in_size; i++)
        {
            get_in_v=in[get][i];
            if(visit[get_in_v]==-1)
            {
                visit[get_in_v]=visit[get]+1;
                parents[get_in_v]=get;
                ss.push(get_in_v);
            }
        }
    }
    //flag=999;
    //return ;
    return -1;
}
int main()
{
    //freopen("762In.txt","r+",stdin);
    //freopen("762Out.txt","w+",stdout);
    int n,sp=0;
    while((scanf("%d",&n))!=EOF)
    {
        for(int j=0; j<n; j++)
        {
            string s1,s2;
            cin>>s1>>s2;
            in[s1].push_back(s2);
            in[s2].push_back(s1);
            visit[s1]=-1;
            visit[s2]=-1; ///-1 using as visited color
        }
        cin>>a1>>a2;
        flag=bfs762();
        if(sp!=0)
        {
            cout<<"\n";
            //sp++;
        }
        sp++;
        if(flag!=-1)
        {
            print_762(a2,a1);
        }
        else
        {
            cout<<"No route\n";
        }
        flag=0;
        in.clear();
        parents.clear();
    }
    return 0;
}
