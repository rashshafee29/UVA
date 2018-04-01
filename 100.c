#include<stdio.h>
int main()
{
    long long int a,b,n,i,c,s,tmp,k;
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
        for(i=a; i<=b; i++)
        {
            c=0;
            if(i==1)
            {
                c++;
            }
            n=i;
            while(n > 1)
            {
                if(n % 2==0)
                    n= n/2;
                else
                    n = (3*n)+1;
                c++;
            }
            if(c>s)
            {
                s=c;
            }
        }
        printf("%lld\n",s);;
    }
    return 0;
}
