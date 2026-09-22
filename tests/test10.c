#include <stdio.h>
int main()
{
    int a;
    int w=0;
    int g=0;
    scanf("%d",&a);
    if(a>0&&a<3000)
    {
        int i;
        
        for(i=1;i<=a/4;i++)
        {
            int m;
            for(m=1;m<=a/100;m++)
            {
                if(i*4==a&&m*100!=a)
                {
                    w=1;
                    break;
                }
                }
            }
            
        }
      
    
    int n;
    for(n=1;n<=a/400;n++)
    {
        if(n*400==a)
        {
           g=1;
           break;
        }
    }
    if(w==1||g==1)
    {
        printf("Y");
    }
    else
    {
        printf("N");
    }
    return 0;
}