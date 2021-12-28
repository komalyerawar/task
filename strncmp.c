#include<stdio.h>
#include<stdlib.h>
main()
{
        char a[20],b[20];
        int i,j=0,n;
        printf("Enter 1st string\n");
        gets(a);
        printf("Enter 2nd string\n");
        gets(b);
        printf("Enter a number from where to compare\n");
        scanf("%d",&n);

        for(i=0;i<n;i++)
        {
                if(a[i]==b[i])
                        j++;
        }
        if(n==j)
        printf("equal\n");
        else
        printf("not equal\n");
}

