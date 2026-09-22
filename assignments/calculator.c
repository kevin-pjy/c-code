#include <stdio.h>
int main()
{
    int i=0;
    int a;
    int b;
     printf("===calculator===\n");
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("0.Exist\n");
    printf ("choose a menu: \n");
    
    scanf("%d",&i);
    while(i!=0)
    {
        

       
        switch(i)
        {
            case 1:
            printf("Enter two numbers: ");
            scanf("%d %d",&a,&b);
            printf("%d+%d=%d\n",a,b,a+b);
            break;
            case 2:
            printf("Enter two numbers: ");
            scanf("%d %d",&a,&b);
            printf("%d-%d=%d\n",a,b,a-b);
            break;
            case 3:
             printf("Enter two numbers: ");
            scanf("%d %d",&a,&b);
            printf("%d*%d=%d\n",a,b,a*b);
            break;

            case 4:
            printf("Enter two numbers: ");
            scanf("%d %d",&a,&b);
            if(b==0)
            {
                printf("fals\n");

            }else{
            printf("%d/%d=%lf\n",a,b,1.0*a/b);
        
        }

            break;
            default:
            printf("false\n");
            break;
            
        }
        printf("===calculator===\n");
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("0.Exist\n");
        printf ("choose a menu: \n");
        scanf("%d",&i);

    }
    return 0;
}