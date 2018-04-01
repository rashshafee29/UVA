#include<stdio.h>
int main()
{
    long long int a,b,n,i,c,s,tmp,k;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        s=0;
        if(a==0 && b==0)
            break;
        if(a>b)
        {
            tmp=b;
            b=a;
            a=tmp;
        }
        for(i=b; i>=a; i--)
        {
            c=0;
            n=i;
            if(n%2==0)
            {
                n=n/2;
            }
            else
            {
                n=(3*n)+1;
            }
            while(n != 1)
            {
                if(n % 2==0)
                    n= n/2;
                else
                    n = (3*n)+1;
                c++;
            }
            if(c>s)
            {
                k=i;
                s=c;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n", a, b, k, s);
    }
    return 0;
}

