#include<stdio.h>
#include<string.h>
int main()
{
    int a,c,n,i,l;
    char s[300];
    while(gets(s)!=NULL)
    {
        l=strlen(s);
        c=0;
        n=0;
        for(a=0;a<l;a++)
        {
            if((s[a]>=33 && s[a]<=64) || (s[a]>=91 && s[a]<=96) || (s[a]>=123 && s[a]<=127) || s[a+1]=='\0')
            {
                s[a]=32;
            }
        }
        for(a=0;a<l;a++)
        {
            if(((s[a]>=65 && s[a]<=90) || (s[a]>=97 && s[a]<=122)) && (s[a+1]==32))
            {
                c++;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
