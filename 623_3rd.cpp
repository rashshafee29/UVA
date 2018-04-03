#include<bits/stdc++.h>

#define L 10000
using namespace std;
int l=0;
int fact[L];
void mult(int n)
{
    long i,c=0;
    int arr[L];
    for(i=0; i<=l; i++)
    {
        arr[i]=fact[i];
    }
    for(i=0; i<=l; i++)
    {
        fact[i] = (arr[i]*n + c)%10;
        c = (arr[i]*n+ c)/10;
    }
    if(c!=0)
    {
        while(c!=0)
        {
            fact[i]=c%10;
            c= c/10;
            i++;
        }
    }
    l=i-1;
}
void find_factorial(int n)
{
    int i;
    for(i=2; i<=n; i++)
    {
        mult(i);
    }
}

int main()
{
    int x,i;
    while((scanf("%d",&x))!=EOF)
    {
        fact[0]=1;
        find_factorial(x);
        printf("%d!\n",x);
        for(i=l; i>=0; i--)
        {
            printf("%d",fact[i]);
        }
        l=0;
        cout<<"\n";
    }
    return 0;
}
