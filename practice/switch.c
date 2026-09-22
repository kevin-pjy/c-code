#include <stdio.h>
int main()
{
    int type;
    
    printf("Enter a number: ");
    scanf("%d",&type);

    switch (type)
{
         case 1:
         printf("hello");
         break;

         case 2:                                
         printf("world");
         break;

         case 3:                        
         printf("!");
         break;

         default:printf("what the hell");

    }

return 0;
}