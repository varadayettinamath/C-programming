#include<stdio.h>
main()
{
    int n;
    int digit;
    int original;
    int reverse=0;
    printf("enter any number\n");
    scanf("%d",&n);
    original=n;
    while(n>0)
    {
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    if(original==reverse)
    {
        printf("number is palindrome");
    }
    else
    {
        printf("not palindrome");
    }
}
