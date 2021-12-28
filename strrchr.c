#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
        char a[20],ch;
        int i,j,len;
        printf("Enter a string\n");
        gets(a);
        printf("Enter a character\n");
        scanf("%c",&ch);
        len=strlen(a);
        for(i=len-1;i>=0;i--)
        {
                if(a[i]==ch)
                {
                        for(j=i;j<len;j++)//last occurance string find
                                printf("%c",a[j]);
                        return 0;
                }
        }
        return 0;
}
