#include <stdio.h>
int main()
{
    int x;
    int cnt=0;
    int number[100];
    int sum=0;
    int average;
    scanf("%d",&x);
   while(x!=-1){
    number[cnt]=x;
    sum+=x;
    cnt++;
    scanf("%d",&x);
   }
   
   if(cnt!=0){
    average=sum/cnt;
    printf("%d\n",average);

   }
int i;
for(i=0;i<cnt;i++){
    if(number[i]>=average){
        printf("%d\n",number[i]);
    }
}
return 0;
}