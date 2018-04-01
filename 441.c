#include<stdio.h>
int main()
{
    int c,n,k,i1,i2,i3,i4,i5,i6,a[20],s=0;
    while(1)
    {
        if(s!=0)
        {
            printf("\n");
        }
        scanf("%d",&k);
        if(k==0)
            break;
        for(n=1;n<=k;n++)
        {
            scanf("%d",&a[n]);
        }
        for(i1=1;i1<=k;i1++)
        {
            for(i2=i1+1;i2<=k;i2++)
            {
                for(i3=i2+1;i3<=k;i3++)
                {
                    for(i4=i3+1;i4<=k;i4++)
                    {
                        for(i5=i4+1;i5<=k;i5++)
                        {
                            for(i6=i5+1;i6<=k;i6++)
                            {
                                printf("%d ",a[i1]);
                                printf("%d ",a[i2]);
                                printf("%d ",a[i3]);
                                printf("%d ",a[i4]);
                                printf("%d ",a[i5]);
                                printf("%d\n",a[i6]);
                            }
                        }
                    }
                }
            }
        }
        s++;
        //printf("\n");
    }
    return 0;
}
