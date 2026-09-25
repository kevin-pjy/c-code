
#include <stdio.h>
#include <windows.h> //sleep
//#include <string.h>
#include <stdlib.h>  //clean 
int main()
{
    char arr1[] = "welcome to bit !!!";
    char arr2 []= "##################";//18 #
    printf("%s\n",arr2);
    int i=0;
    int left=0;
    //int right=strlen(arr2)-1;
   // while (i<strlen(arr2)/2)
   int right=sizeof(arr1)/sizeof(arr1[0])-2;
   //while(i<=(sizeof(arr1)/sizeof(arr1[0])-2)/2)
   while(left<=right)
   {
    i++;
    arr2[left]=arr1[left];
    arr2[right]=arr1[right];
    printf("%s\n",arr2);
    left++;
    right--;
    Sleep(1000);//单位毫秒；
    system("cls");


}
    return 0;
}