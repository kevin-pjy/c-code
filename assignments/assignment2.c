#include <stdio.h>
int main()
{   
    int start;
    int pass;
    //int a;
   // int hour;
    //int minute;
    scanf("%d %d",&start,&pass);
//    start=start/100*60+start%100;
//    a=start+pass;
//    if(a>=0&&a<=24*60)
//{   
  //  if(a==24*60)
    //{
      //  a=0;
    //}
    //hour=a/60;
    //minute=a%60;
//    if(minute<10&&minute>=0)
//{   printf("%d0%d",hour,minute);
//}else{printf("%d%d",hour,minute);

//}
//}else{printf("out of one day");

//}
    int total;
    total=(start/100*60+start%100)+pass;
    if(total<0||total>24*60)
    {
        printf("out of one day");

    }else
    {
        if(total==24*60)
        {
            total=0;
        }
        printf("%d%02d",total/60,total%60);
       

    }
    return 0;
}