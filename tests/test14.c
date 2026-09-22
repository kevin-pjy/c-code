#include <stdio.h>
void set_arr(int arr2[3][5],int h,int l)
{
for (int i=0;i<h;i++)
{
  for (int j=0;j<l;j++)  {
    arr2[i][j]=i+j;
    printf("%d ",arr2[i][j]);
  }
  printf("\n");
}

}
int main()
{
    int arr[3][5]={0};
    set_arr(arr,3,5);
    return 0;
}