#include<stdio.h>
int main()
{
        int a,b;
        printf("Enter a number\n");
        scanf("%d %d",&a,&b);
        if(a!=b)
        {
                a=a^b;
                b=a^b;
                a=a^b;
        }
        /*      if(a!=b)
        {
                a=a*b;
                b=a/b;
                a=a/b;
        }
                if(a!=b)
        {
                a=a+b;
                b=a-b;
                a=a-b;
        }
*/      printf("%d %d\n",a,b);
}

