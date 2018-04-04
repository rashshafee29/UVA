#include<stdio.h>
int main()
{
    unsigned long long int temp,n1,n2,i,n=0,x,y,m,c,d;
    while((scanf("%llu%llu",&x,&y))==2)
    {
        if((x==0)&&(y==0))
            break;
        n=0;
        if(y>x)
        {
            temp=y;
            y=x;
            x=temp;
        }
        while (x!=0)
        {
            n1=x%10;
            x=x/10;
            n2=y%10;
            y=y/10;
            if((n1+n2)>=10)
            {
                m=1;
                n++;
            }
            else if((n1+n2)==9 && m==1)
            {
                n++;
                m=1;
            }
            else
            {
                m=0;
            }
        }
        if(n==0)
        {
            printf("No carry operation.\n");
        }
        else if(n==1)
        {
            printf("%llu carry operation.\n",n);
        }
        else
        {
            printf("%llu carry operations.\n",n);
        }
        n=0;
        m=0;
    }
    return 0;
}
