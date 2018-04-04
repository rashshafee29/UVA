#include<stdio.h>
int main()
{
    long long int a,b;
    while((scanf("%lld %lld",&a,&b)!=EOF) || (scanf("%lld %lld",&b,&a)!=EOF))
    {
        if(a<b)
            printf("%lld\n",b-a);
        else
            printf("%lld\n",a-b);
    }
    return 0;
}
