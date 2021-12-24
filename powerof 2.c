#include<stdio.h>
int main()
{
        int n;
        printf("Enter number\n");
        scanf("%d",&n);
        if(((n>>1)&n)==0)
                printf("yes");
        else
                printf("no");
}

/*
int main()
{
        int n;
        printf("Enter a number\n");
        scanf("%d",&n);
        if((n&(n-1))==0)
        {
                printf("yes");

        }
        else
                printf("no");

//      return 0;
}
*/
