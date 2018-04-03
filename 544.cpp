#include<bits/stdc++.h>
using namespace std;
int V,Ed,p[1000],rank_[1000],c=0,total=0,cc=1,uu[1000],vv[1000];
double ww[1000];
struct Edge
{
    int u,v;
    double w;
} E[100*100];
int Make_Set(int x)
{
    p[x]=x;
    rank_[x]=0;
}
int FindSet(int x)
{
    if(x!=p[x])
        p[x]=FindSet(p[x]);
    return p[x];
}
int Link(int x,int y)
{
    if(rank_[x]>rank_[y])
    {
        p[y]=x;
        //cout<<y<<" "<<x<<"<---\n";
    }
    else
    {
        p[x]=y;
        //cout<<y<<" "<<x<<"<--22-\n";
        if(rank_[x]==rank_[y])
        {
            rank_[y]++;
        }
    }

}
int Union(int x,int y)
{
    Link(FindSet(x),FindSet(y));
}
bool comp(Edge e1, Edge e2)
{
    if (e1.w > e2.w)
        return false;
    return true;
}
int MST_Kruskal()
{
    int v,i;
    for(v=0; v<V; v++)
    {
        Make_Set(v);
    }
    sort(E,E+Ed,comp);
    cc=0;
    for(i=0; i<Ed; i++)
    {
        if(FindSet(E[i].u)!=FindSet(E[i].v))
        {
            ///A
            total=total+E[i].w;
            uu[cc]=E[i].u;
            vv[cc]=E[i].v;
            ww[cc]=E[i].w;
            cc++;
            Union(E[i].u,E[i].v);
            c++;
        }
    }
}
int main()
{
    //freopen("KruskalIn.txt","r",stdin);
    cin>>V>>Ed;
    int i,j;
    string s1,s2,s3;
    for(i=0; i<Ed; i++)
    {
        //for(j=0;j<Ed;j++)
        {
            cin>>s1;
            E[i].u=s1[0];///source
            cin>>s2;
            E[i].v=s2[0];///destination
            cin>>s3;
            E[i].w=s3[0];///weight
            //Ed++;
        }
    }
    MST_Kruskal();
    cout<<"MST tree:\n";
    for(int q=0; q<cc; q++)
    {
        cout<<uu[q]<<"-->"<<vv[q]<<"\t"<<ww[q]<<"\n";
    }
    cout<<"Minimum cost:"<<total;
}

