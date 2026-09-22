#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if(x>=0&&x<=153)
{
    for(int m=0;m<=9;m++)
    {
        for(int n=0;n<=9;n++)
        {
            if(m*16+n==x)
            {
                if(m==0){
                    printf("%d",n);
                }else{
                printf("%d%d",m,n);}
            }
        }
    }
}else{
    printf("Invalid input\n");
}

    return 0;
}