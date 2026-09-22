#include <stdio.h>
int main ()
{
    int x;
    printf ("enter a number:");
    scanf("%d",&x);
    int t;
    t=x;
    int d=1;
    while(t>9)
    {
     t/=10;
     d*=10;
    }
    int m;
    while(d>=1){
        m=x/d;
        x%=d;
        d/=10;
        
        printf("%d",m);
        if(d>=1)
        {
            printf(" ");
        }
    }
    
    return 0;

}