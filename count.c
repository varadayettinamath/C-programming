#include<stdio.h>
main()
{
    int num;
    int count=0;
    printf("enter any number:");
    scanf("%d",&num);
    if(num==0)
    {
        count=1;
    }
    else
    {
        while(num!=0)
        {
            count=count+1;
            num=num/10;
        }
    }
    printf("count=%d",count);

}
