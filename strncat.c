#include<stdio.h>
#include<string.h>
int main()
{
        char a[100],b[100];
        int i,n,j;
        printf("Enter 1st string\n");
        gets(a);
        printf("Enter 2nd string\n");
        gets(b);
        printf("Enter a number from which part add 2nd string\n");
        scanf("%d",&n);
        for(i=0;a[i]!='\0';i++)
        {

        }
        for(j=0;j<n;j++)
        {
                a[i]=b[j];
                i++;
        }
        a[i]='\0';
        printf("%s",a);
}
