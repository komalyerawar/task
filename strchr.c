#include<stdio.h>
#include<stdlib.h>
main()
{
        char a[100],ch;
        int i=0,c;
        printf("Enter string\n");
        gets(a);
        printf("Enter char\n");
        scanf("%c",&ch);
        for(i=0;a[i];i++)
        {
                if(a[i]==ch)
                {
                        c++;
                }
        }
        printf("%d",c);


}
