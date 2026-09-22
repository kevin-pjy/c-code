#include <stdio.h>
int main()
{
    double r;
    double d;
    double c;
    double s;
    scanf("%lf",&r);
    if(r>0&&r<=100)
    {
    d=2*r;
    c=2*3.14159*r;
    s=3.14159*r*r;
    printf("%.4lf %.4lf %.4lf",d,c,s );
        }    else {
        printf("false");
        }
    return 0;
}