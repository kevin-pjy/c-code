#include <stdio.h>
void patch(char* Province,double Area,double Pop)
{
    
    printf("%s   %lf   %lf\n",Province,Area,Pop);
}
int main()
{
    printf("Province   Area(km2)   Pop.(10k)\n");
    patch("Anhui",139600.00,6461.00);
    patch("Beijing",16410.54,1180.70);
    patch("Chongqing",82400.00,3144.23);
    patch("Shanghai",6340.50,1360.26);
    patch("Zhejiang",101800.00 ,4894.00);
    return 0;
}