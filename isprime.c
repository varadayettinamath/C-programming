#include<stdio.h>
main()
{
    int num,i;
    int isPrime=1;
    printf("enter any number:");
    scanf("%d",&num);
    if(num<=1)
    {
        isPrime=0;
    }
    else
    {
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {
                isPrime=0;
                break;
            }
        }
    }
    if(isPrime==1)
        printf("prime no.");
    else
        printf("not prime");
}
