#include<stdio.h>
#include<string.h>
void main()
{
        char a[100],b[100];
        int i;
        printf("Enter string\n");
        gets(a);
        for(i=0;a[i];i++)
        {
                b[i]=a[i];
        }
        b[i]=a[i];
        printf("%s",b);


}
