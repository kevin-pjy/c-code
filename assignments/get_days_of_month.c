#include <stdio.h>
int a;
int judge_month_two(int ly)
{
    
   if(ly%4==0&&ly%100!=0||ly%400==0)
        {a=1;}
        else
            {a=0;}
            return a;
                
}

int get_days_of_month(int y,int m)


{
    int months[12]={31,28,31,30,31,30,31,31,30,31,30,31};

    judge_month_two(y);
    if(a==1)
    {
        months[1]=29;
    }
    return months[--m];
    
}
int main()
{
    int year ;
    int month;
    scanf("%d %d",&year,&month);
    int day=get_days_of_month(year,month);
    printf("%d",day);
    return 0;
}