#include <stdio.h>
int main()
{
    int x;
    

    for (x=2;x<=100;x++)
    {
        int i;
        int a=0;
        for (i=2;i<x;i++){
            if(x%i==0) {
                a=1;
                break; }
        }
        if(a==0){
            printf("%d ",x);
        }
    
    }
    return 0;
}
    
  