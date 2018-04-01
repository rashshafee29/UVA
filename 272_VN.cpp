#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int p=0,i;
    while(getline(cin,s))
    {
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='"')
            {
                p++;
                if(p%2==0)
                {
                    printf("''");
                }
                else
                {
                    printf("``");
                }
            }
            else
            {
                printf("%c",s[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
