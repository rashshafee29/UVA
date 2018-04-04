#include<stdio.h>
#include<string.h>
int main()
{
    int n1,n2,i,n,x,y,m,c,d;
    int a[12],b[12];
    while(1)
    {
        scanf("%d %d",&x,&y);
        if((x==0)&&(y==0))
            break;
        n=0;
        m=0;
        for(c=0; x!=0 && y!=0; c++)
        {
            n1=x%10;
            x=x/10;
            n2=y%10;
            y=y/10;
            if((n1+n2)>9)
            {
                n++;
                x=x+1;
            }
        }
                if(n==0)
        {
            printf("No carry operation.\n");
        }
        else
        {
            printf("%d carry operations.\n",n);
        }
    }
}
