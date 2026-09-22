#include <stdio.h>
int main()
{
    int x;
    printf("enter a number:");
    scanf("%d",&x);

    int digits=0;

    digits++;
    x/=10;
    while(x>0)
    {
        digits++;
        x/=10;

    }
printf("the number of digits is %d",digits);
    return 0;
}