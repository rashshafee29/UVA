#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int l,i,n=0;
    while(gets(s)!=EOF)
    {
        l=strlen(s);
        for(i=1; i<=l; i++)
        {
            if(s[i]==34)
                n++;
            if(n%2!=0)
            {
                printf("``");
            }
            else
            {
                printf("''");
            }
            printf("%c",s[i]);
        }
    }
}
