#include<stdio.h>
main()
{
    printf("=======C PROGRAMMING TOOLKIT=======");
    printf("\n");
    printf("\n1.count digits\n2.reverse a number\n3.check palindrome\n4.check prime number\n5.check amstrong number\n6.calculate factorial\n7.exit\n");
    char choice;
    printf("\nEnter your choice:");
    scanf("%c",&choice);
    switch(choice)
    {
        case '1':
        {
            int n;
            int count=0;
            printf("enter any number:\n");
            scanf("%d",&n);
            if(n==0)
            {
                count=1;
            }
            else
            {
                while(n!=0)
                {
                    count=count+1;
                    n=n/10;
                }
            }
            printf("count of number=%d",count);
            break;
        }
        case '2':
        {
            int n;
            int reverse=0;
            int digit;
            printf("enter any number:\n");
            scanf("%d",&n);
            while(n>0)
            {
                digit=n%10;
                reverse=reverse*10+digit;
                n=n/10;
            }
            printf("reverse number=%d",reverse);
            break;
        }
        case '3':
        {
            int n;
            int digit;
            int original;
            int reverse=0;
            printf("enter any number:");
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
                printf("number is palindrome\n");
            }
            else
            {
                printf("number is not palindrome\n");
            }
            break;
        }
        case '4':
        {
            int n,i;
            int isprime=1;
            printf("enter any number:\n");
            scanf("%d",&n);
            if(n<2)
            {
                isprime=0;
            }
            else
            {
                for(i=1;i<n;i++)
                {
                    if(n%i==0)
                    {
                        isprime=1;
                        break;
                    }
                }
            }
            if(isprime==1)
            {
                printf("Prime number");
            }
            else
            {
                printf("not prime number");
            }
            break;
        }
        case '5':
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
            {
                printf("armstrong number");
            }
            else
            {
                printf("not an armstrong number");
            }
            break;
        }
        case '6':
        {
            int n,i;
            int fact=1;
            printf("enter any number\n");
            scanf("%d",&n);
            for(i=1;i<=n;i++)
            {
                fact=fact*i;
            }
            printf("factorial=%d",fact);
            break;
        }
        case '7':
        {
            printf("Exiting the C programming toolkit");
        }
        default:
            printf("INVALID INPUT");
    }
}
