#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,x,y,m,c,d;
    int a[12],b[12];
    while(1)
    {
        scanf("%d %d",&x,&y);
        if((x==0)&&(y==0))
            break;
        n=0;
        m=0;
        for(c=0; x!=0; c++)
        {
            a[c]=x%10;
            x=x/10;
            m++;
        }
        for(d=0; y!=0; d++)
        {
            b[d]=y%10;
            y=y/10;
        }
        i=0;
        while(i<m)
        {
            if((a[i]+b[i])>9)
            {
                a[i+1]=a[i+1]+1;
                n++;
            }
            i++;
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
    return 0;
}
