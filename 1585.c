#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,m,counter,save,save2,j;
    char str[100],ch;

    scanf("%d",&n);

    gets(str);
    if(n==1)
    {



        m=strlen(str);

        save=0;
        save2=0;
        counter=0;
       // printf("m=%d\n",m);

        for(j=0;j<m;j++)
        {
            ch=str[j];
            //printf("ch:=%c\n",ch);


            if(ch=='o')
            {
                counter++;

                save2=save2+counter;


            }
            if(ch=='x')
            {

                save=save+save2;

                counter=0;
                save2=0;

            }

        }

        save=save+save2;



        printf("%d\n",save);



        }

    else

    {

    for(i=1;i<=n;i++)
    {


        gets(str);

        m=strlen(str);

        save=0;
        save2=0;
        counter=0;
       // printf("m=%d\n",m);

        for(j=0;j<m;j++)
        {
            ch=str[j];
            //printf("ch:=%c\n",ch);


            if(ch=='o')
            {
                counter++;

                save2=save2+counter;


            }
            if(ch=='x')
            {

                save=save+save2;

                counter=0;
                save2=0;

            }

        }

        save=save+save2;



        printf("%d\n",save);

    }

    }



    return 0;


}
