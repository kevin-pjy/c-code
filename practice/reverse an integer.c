#include <stdio.h>
int main()
{  
    int x ;
    int digit;
    int num;

    printf("enter a number:");

    scanf("%d",&x);


        digit=x%10;
        num=x/10;
        
        while(num!=0){

            digit=digit*10+num%10;
            num=num/10;
        }
      
        printf("the reverse of the number is %d",digit);

        return 0;


    

}