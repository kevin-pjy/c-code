 #include <stdio.h>

 int main()
 {
    int bill;
    int price;
   

   printf("how much you give:");

   scanf("%d",&bill);

   printf("the price of items:");

   scanf("%d",&price);

   int charge=bill-price;
   
   if (charge>=0)
   {printf("your charge is %d", charge);}
   else {printf("your money isn't enough");
   }
 
    return 0;
}