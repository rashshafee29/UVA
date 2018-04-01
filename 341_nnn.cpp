using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<limits>
#define LLU long long unsigned int
#define LLD long long double
#define FOR(i,N) for(int i=0;i<(N);i++)
#define MAX_INT numeric_limits<int>::max()/3
int N,streets,source,dest,inter;
int pred[15][15];
bool first;
int mat[15][15];
void path(int i,int j)
{
    if(pred[i][j]==-1)
        if(first)
        {
            cout<<i+1<<" "<<j+1;
            first=false;
        }
        else
        {
            cout<<" "<<j+1;
        }
    else
    {
        path(i,pred[i][j]);
        path(pred[i][j],j);
    }
}
int main()
{
    int cases=1;
    while(cin>>N)
    {
        if(!N) break;
        first= true;
        FOR(i,15)
        FOR(j,15)
        {
            mat[i][j]=MAX_INT;
            pred[i][j]=-1;
        }
        FOR(k,N)
        {
            cin>>streets;
            FOR(i,streets)
            {
                cin>>inter;
                cin>>mat[k][inter-1];
            }
        }
        cin>>source>>dest;
        FOR(k,N)
        FOR(i,N)
        FOR(j,N)
        {
            if(mat[i][j]>mat[i][k]+mat[k][j])
            {
                mat[i][j]=mat[i][k]+mat[k][j];
                pred[i][j]=k;
            }
        }
        cout<<"Case "<<cases++<<": Path = ";
        path(source-1,dest-1);
        cout<<"; "<<mat[source-1][dest-1]<<" second delay"<<endl;
    }
    return 0;
}
