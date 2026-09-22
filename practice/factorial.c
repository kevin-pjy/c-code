#include <stdio.h>
int main() 
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    int m=1;
    int t=1;

    while (t<=n)
    {
        m*=t;
        t++;

    };
    printf("n!=%d",m);

    return 0;


}