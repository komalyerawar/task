#include<stdio.h>
#define SIZE sizeof(int)*8
//int reverse_bit(int);
int main()
{
        int n,i;
        printf("Enter a number\n");
        scanf("%d",&n);
        for(i=31;i>=0;i--)
                printf("%d",n>>i&1);//print binary of number
        printf("\n");
        reverse_bit(n);//fun call
        for(i=0;i<=31;i++)
        printf("%d",n>>i&1);
        printf("\n");
}
int reverse_bit(int n)
{
        int pos=SIZE-1;
        int reverse=0;
        while(pos>=0&&n)
        {
                if(n&1)
                {
                        reverse=reverse|(1<<pos);
                }
                n=n>>1;
                pos--;
        }
        return reverse;
}

