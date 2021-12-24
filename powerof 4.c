#include<stdio.h>
int main()
{
        int n;
        printf("Enter a number\n");
        scanf("%d",&n);
        if((n&(n-1))==0)//check power of 2
        {
                if(((n>>1)&4)==0)//check power of 4
                        printf("yes\n");
                else
                        printf("no\n");
        }
        else
                printf("No\n");
}
