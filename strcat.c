#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
        char a[100],b[100],c[100];
        int i,j=0;
        printf("Enter 1st string\n");//abc
        gets(a);
        printf("Enter 2nd string\n");//123
        gets(b);
        for(i=0;a[i];i++);
        {
        for(j=0;b[j];i++,j++)
        {
                a[i]=b[j];//abc123
        }
        a[i]=b[j];
        }
/*      for(i=0;a[i]&&b[i];i++,j++)
        {
                c[j]=a[i];
                c[++j]=b[i];
        }
        if(a[i]!='\0')
        {
                for(;a[i];i++,j++)
                {
                        c[j]=a[i];
                }
        }
        if(b[i]!='\0')
        {
                for(;b[i];i++,j++)
                {
                        c[j]=b[i];
                }
        }
        c[j]='\0';
        printf("%s ",c);//a1b2c3
*/
        printf("%s ",a);
}
