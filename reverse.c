#include<stdio.h>
main()
{
    int n;
    int digit;
    int reverse=0;
    printf("enter any number\n");
    scanf("%d",&n);
    while(n>0)
    {
        digit=digit%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    printf("Reverse=%d",reverse);
}
