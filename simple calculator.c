#include<stdio.h>
int getadd(int a,int b);
int getsub(int a,int b);
int getmulti(int a,int b);
float getdiv(int a,int b);
main()
{
    int a,b,sum,diff,multi;
    float div;
    printf("\n1.Addition\n2.substraction\n3.multiplication\n4.division\n5.Exit\n");
    int choice;
    printf("enter any two numbers:");
    scanf("%d%d",&a,&b);
    printf("enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            sum=getadd(a,b);
            printf("Sum=%d",sum);
            break;
        case 2:
            diff=getsub(a,b);
            printf("difference=%d",diff);
            break;
        case 3:
            multi=getmulti(a,b);
            printf("product=%d",multi);
            break;
        case 4:
            div=getdiv(a,b);
            printf("divsion=%f",div);
            break;
        case 5:
            printf("exit");
        default:
            printf("Invalid input");
    }

}
int getadd(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}
int getsub(int a,int b)
{
    int diff;
    diff=a-b;
    return diff;
}
int getmulti(int a,int b)
{
    int multi;
    multi=a*b;
    return multi;
}
float getdiv(int a,int b)
{
    float div;
    div=a/b;
    return div;
}
