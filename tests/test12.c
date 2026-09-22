#include <stdio.h>
#include <math.h>
int main()
{   
    unsigned int n;
    printf("Enter a number: ");
    scanf("%u",&n);
    double sqrt_n=sqrt(n);
    int m=0;

if(n>1){
    for (int i=2;i<=sqrt_n;i++)
    {
        if(n%i==0)
        {
            m=1;
            break;
        }
    }
    if(m==0)
    {
        printf("%u is a prime",n);

    }else {
        printf("%u is not a prime",n);
    }
}
    return 0;
}