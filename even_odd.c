#include<stdio.h>
int main()
{
        int n;
        printf("Enter a number\n");
        scanf("%d",&n);
                if((n%2)==0)
        //      if((n&1)==0)//check even of odd
                printf("even");
        else
                printf("odd");
}
