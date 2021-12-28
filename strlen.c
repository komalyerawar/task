#include<stdio.h>
#include<stdlib.h>
int main()
{
        char a[100];
        int i;
        printf("Enter string\n");
        gets(a);
        for(i=0;a[i]!='\0';i++);
        printf("%d",i);
}
