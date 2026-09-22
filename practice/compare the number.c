#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
printf("enter the numbers:");

scanf("%d %d %d",&a,&b,&c);

if (a>b)
printf("the largest number is %d",a);
else if(b>c)
printf("the largest number is %d",b);
else
printf("the largest number is %d",c);

return 0;
}