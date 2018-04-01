#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000],c;
    int i,l;
    while ( scanf("%s",s)!=EOF )
    {
          c=getchar();//after word za astese ta save kortese
          l=strlen(s);
          //printf("->>%s",inp);
          for( i=l-1; i>=0; i-- )
          {
               printf("%c",s[i]);
          }
          putchar(c);//ta print kortese -_-
    }
    return 0;
}
