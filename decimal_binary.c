#include<stdio.h>
int main()
{
        int n,rem,binary=0,num,temp=1;
        printf("Enter a number\n");
        scanf("%d",&n);
        num=n;
        while(n>0)
        {
                rem=n%2;
                binary=binary+rem*temp;
                n=n/2;
                temp=temp*10;

        }
        printf("%d",binary);

}
