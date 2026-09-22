#include <stdio.h>
int main()
{
    int height;
    double a;
    int inch;
    int foot;
    scanf("%d",&height);
    if(height>=0)
{

    
    a=height/100.0/0.3048; 
    foot=(int)a;
    inch=(int)((a-foot)*12);//强制转换没想到 还有数字处理 以及格式问题
    if(inch>=12)//可以不用判断
{
    inch=inch-12;//没写inch=
    foot++;
}
    printf("%d %d\n",foot,inch);
}    
    return 0;
}