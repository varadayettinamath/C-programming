#include<stdio.h>
main()
{
    int n,digit,original,sum=0;
    printf("enter any number:");
    scanf("%d",&n);
    original=n;
    while(n>0)
    {
        digit=n%10;
        sum=sum+digit*digit*digit;
        n=n/10;
    }
    if(sum==original)
        printf("armstrong number");
    else
        printf("not an armstrong number");
}

