#include <stdio.h>
int main()
{
    int n;
    int a;
    double sum=0;
    double m=1.0;
    printf("enter a number:");
    scanf("%d",&n);
    
    for (a=1;a<=n;a++){

        sum+=m/a;
        m=-m;
    }
    printf("the summation is %f ",sum);
    return 0;

}