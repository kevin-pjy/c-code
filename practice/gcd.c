#include <stdio.h>
int main()
{
    int a;
    int b;
    int t;
    printf("enter two number:");
    scanf("%d %d",&a,&b);

    while(b!=0){
        t=a%b;
        a=b;
        b=t;

    }
    printf("the gcd is %d",a);
    return 0;
}