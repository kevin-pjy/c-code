#include <stdio.h>
int main()
{
    int i=0;
    int pj[]={1,2,3,4,5,6,7,8,9,10,11,-1};
    int *p=pj;
    while(*p!=-1)
    {
        printf("%d ",*p++);
    }
   
    return 0;
}