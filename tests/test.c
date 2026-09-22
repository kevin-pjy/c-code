#include <stdio.h>
int main()
{
    int x;
    int digit;
    int ret=0;
    
    printf("enter a number:");
    scanf("%d",&x);
    while(x!=0)
    {
        digit=x%10;
        ret=ret*10+digit;
        x/=10;
    }
    printf("the reverse of the number is %d",ret);
    return 0;
}