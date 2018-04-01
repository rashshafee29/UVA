#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int l,i,n=0;
    while(gets(s))
    {
        l=strlen(s);
        for(i=0; i<l; i++)
        {
            if(s[i]=='"')
            {
                n++;
                if((n%2)!=0)
                {
                    printf("``");
                }
                else
                {
                    printf("''");
                }
            }
            else
                printf("%c",s[i]);
        }
    }
    return 0;
}
