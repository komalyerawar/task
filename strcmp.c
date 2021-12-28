#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 main()
{
        char a[50],b[50];
        int i=0;
        printf("Enter 1st string\n");
        gets(a);
        printf("Enter 2nd string\n");
        gets(b);
        for(i=0;a[i];i++)
        {
                if(a[i]!=b[i])
                                break;
        }
        if(a[i]==b[i])
        {
                printf(" same\n");
        }
        else
                printf("not same\n");


}
