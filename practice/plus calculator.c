#include <stdio.h>
int add(int a,int b)
{
     printf("Enter two numbers: ");
            scanf("%d %d",&a,&b);
            printf("%d+%d=%d\n",a,b,a+b);
}
int sub(int a,int b)
{
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
            printf("%d-%d=%d\n",a,b,a-b);
}
int multi(int a,int b)
{
    printf("Enter two numbers: ");
            scanf("%d %d",&a,&b);
            printf("%d*%d=%d\n",a,b,a*b);
}
int div(int a ,int b)
{
    printf("Enter two numbers: ");
            scanf("%d %d",&a,&b);
            if(b==0)
            {
                printf("fals\n");

            }else{
            printf("%d/%d=%lf\n",a,b,1.0*a/b);
        
        }
}
int main()
{
    int static cnt;
    int i;
    scanf("%d",&i);
    while(i!=0)
    {   
        int a;
        int b;
        switch(i)
        {
          
            case 1:
            add(a,b);
            break;
            case 2:
            sub(a,b);
             break;
            case 3:
            multi(a,b);
             break;
            case 4:
            div(a,b);
             break;
            default:
            {
                printf("false");
            }
             break;

        }
        cnt++;
        scanf("%d",&i);
    }
    printf("%d",cnt);
    return 0;
}