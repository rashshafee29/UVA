#include<bits/stdc++.h>
#define pairr pair<int,int>

using namespace std;
pairr p;

struct comp
{
    bool operator()(pairr const& a,pairr const& b)const
    {
        return a.second>b.second;
    }
};
map<string,map<string,int> >weight;
map<string,vector<string> >adj;
map<string,int>check;
map<string,int>d;
map<string ,int>parent;
int n,e,ans=0;
priority_queue<pairr,vector<pairr>,comp>q;


void prim(string source)
{
    string vertice;
    int value;
    //init();
    d[source]=0;
    parent[source]=0;
    p.first=source;
    p.second=d[source];
    q.push(p);
     cout<<"selected node is= \n";
    while(!q.empty())
    {
        p=q.top();
        q.pop();
        vertice=p.first;
        if(!check[vertice])
        {
            check[vertice]=1;

            cout<<vertice<<" ";
            value=p.second;
            ans=ans+value;
            //cout<<" and its value= "<<value<<endl;
            for(int i=0; i<adj[vertice].size(); i++)
            {
                int take=adj[vertice][i];
                {
                    if(weight[vertice][take]<d[take])
                    {
                        d[take]=weight[vertice][take];
                        parent[take]=vertice;
                        q.push(make_pair(take,d[take]));
                    }
                }
            }
        }
    }
}
int main()
{
    string a,b,source;
    int w;
    cout<<"How many vertices\n";
    cin>>n;
    cout<<"How many edges?\n";
    cin>>e;
    for(int i=1; i<=e; i++)
    {
        cout<<"Enter two node\n";
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        cout<<"enter the weight between them\n";
        cin>>w;
        weight[a][b]=w;
        weight[b][a]=w;
    }
    cout<<"Enter the source\n";
    cin>>source;
    prim(source);

    cout<<"And the total minimum value is= \n";
    cout<<ans<<endl;
    return 0;
}
