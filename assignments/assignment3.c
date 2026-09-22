//#include <stdio.h>
//int main()
//{   
  //  int x;
    //int i=10;
    //int y;
   //scanf("%d",&x);
    //y=x%i;
    //x/=i;
    //if(y!=0)
//{
   // printf("%d",y);
   // y=x%i;
   // x/=i;
   //printf("%d%d",y,x);
//}else
//{
   // y=x%i;
    //x/=i;
    //if(y==0)
//{
   // printf("%d",x);
//}else
//{
//printf("%d%d",y,x);
//}

//}
//return 0;
//}

//#include <stdio.h>
//int main()
//{
    //int x;
    //scanf("%d",&x);
    //int y1=x%10;
    //x/=10;
    //int y2=x%10;
    //x/=10;
    //if(y1!=0){
    //    printf("%d%d%d",y1,y2,x);

    //}else{
     //   if(y2!=0){
     //       printf("%d%d",y2,x);
     //   }else{
     //       printf("%d",x);
      //  }
    //}
   // return 0;
//}

//#include <stdio.h>
//int main()
//{
   // int x;
    //scanf("%d",&x);
    //int start=0;
    //int part[]={x%10,(x/10)%10,x/100};
    //while(start<2&&part[start]==0)
    //{
    //    start++;
    //}
    //for(start;start<=2;start++)
    //{
     //   printf("%d",part[start]);
    //}
    //return 0;
//}

#include <stdio.h>


    void part(int x)
    {
        int a=x%10;
        int b=(x/10)%10;
        int c=x/100;
        if(a)
    {
        printf("%d",a);
    }
        if(b||a)
        {
            printf("%d",b);
        }
        printf("%d",c);

    }
    int main()
{
    int x;
    scanf("%d",&x);
    part(x);
    return 0;
}