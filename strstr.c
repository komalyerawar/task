#include<stdio.h>
#include<stdlib.h>
int main()
{
        char a[50],b[50];
        int i,j,k=0,c;
        printf("Enter 1st string\n");
        gets(a);
        printf("Enter 2nd string\n");
        gets(b);
        for(i=0,c=0;a[i];i++)
        {
                k=i;
                for(j=0;b[j];j++,k++)
                {
                        if(a[k]==b[j])
                                continue;
                        else
                                break;
                }
                if(b[j]=='\0')
                c++;
        }
        printf("%d",c);



}

