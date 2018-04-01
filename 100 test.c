#include<stdio.h>
int cycle (int n)
{
    int c=0;
    //if(n==1)
        //return 1;
    //else
    {
        while(n!=1)
        {
            if(n % 2==0)
                n=(n/2);
            else
                n=(3*n)+1;
            c++;
        }
        return c;
    }
}
int main()
{
    long long int a,b,k,n,i,c,s,tmp;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        s=0;
        if(a>b)
        {
            tmp=b;
            b=a;
            a=tmp;
            printf("%lld %lld ",b,a);
        }
        else
            printf("%lld %lld ",a,b);
        for(i=b; i>=a; i--)
        {
            c=cycle(i);
            if(c>s)
            {
                k=i;
                s=c;
            }
        }
        printf("%lld %lld\n",s,k);
    }
    return 0;
}
