#include <stdio.h>

int main()
{
    const int Aoumnt=100000;
    
    int price=0;
    
    printf("请输入付款金额");

   scanf("%d",&price);

    int change=Aoumnt-price;


    printf("找您金额：%d",change);

    return 0;

}
