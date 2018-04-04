#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,c,q[95];
    char s[95],a,t[95];
    printf("Enter string: ");
    gets(s);
    l=strlen(s);
    printf("Occurrence of each letter:\n");
    for(i=65; i<=90; i++)
    {
        c=0;
        a=0;
        for(j=0; j<l; j++)
        {
            if((s[j]==i) || (s[j]==(i+32)))
            {
                c++;
                if(s[j]>=97 && s[j]<=122)
                {
                    a=s[j]-32;
                }
                else
                {
                    a=s[j];
                }
            }
        }
        if(c==0)
            continue;
        else
            printf("%c : %d\n",a,c);
    }
    return 0;
}

