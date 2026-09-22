#include <stdio.h>
int main()
{
    int x;
    int a;
    int y;
    int b;
     scanf("%d %d %d %d",&x,&a,&y,&b);
     double z;
     z=(double)(x-y)/(a-b);
     printf("%lf",z);
    return 0;
}