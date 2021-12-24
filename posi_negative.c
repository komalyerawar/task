#include<stdio.h>
int main()
{
        int n;
        printf("Enter a number\n");
        scanf("%d",&n);
        if(1+(n>>31)-(-n>>31))
        //      if(n>0)
                printf("positive\n");
        else
                printf("negative\n");
}
