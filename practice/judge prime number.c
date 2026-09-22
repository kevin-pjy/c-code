#include <stdio.h>
int main()
{
    int x;
    int i;
    int a=0;
    printf("Enter a number: ");
    scanf("%d", &x);
    for (i=2;i<x;i++)
    {
        x%i;
        
        if(x%i==0) {
            a=1;
            break;}
      }
      if(a==0){
        printf("is a prime number");
      }else{
        printf("is not a prime number");
      }
       return 0;
        }
            
        
    