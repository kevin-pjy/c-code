#include <stdio.h>

int main()
{
    double foot;
    double inch;

    printf("几尺几寸\n");

    scanf("%lf %lf",&foot,&inch);

    printf("身高为%f",(foot+inch/12)*0.3048);

    return 0 ;
}
