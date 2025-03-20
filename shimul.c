#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value:\n");
    scanf("%d\n%d",a,b);
    if(a>0&&b>0)
    {
        if(a%2==0&&b%2==0)
        {
            printf("even");
        }
        else
        {
            printf("odd");
        }
        if(a<0&&b<0)
        {
            c=a*b;
            printf("c=%d",c);
        }
    }
    else
    {
        printf("invaild");
    }
    return 0;
}
