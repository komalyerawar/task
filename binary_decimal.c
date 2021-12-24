#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
        int n,rem,decimal=0,temp=1;
        printf("Enter a number\n");
        scanf("%d",&n);
        while(n>0)
        {
                rem=n%10;
                n=n/10;
                decimal=decimal+rem*temp;
                temp++;

        }
        printf("%d",decimal);
}
