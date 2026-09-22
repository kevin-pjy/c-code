#include <stdio.h>

int main()
{
    int hours1,minutes1;

    int hours2,minutes2;

    printf("Enter the first time (hours,minutes): ");

    
    scanf("%d,%d",&hours1,&minutes1);
    
    



    printf("Enter the second time (hours,minutes): ");



    scanf("%d,%d", &hours2,&minutes2);

   
   int hoursgap=hours2-hours1;

    int minutesgap=minutes2-minutes1;

    if(minutesgap<0)
    {
        hoursgap--;

        minutesgap+=60;

    }

   

    printf("Time gap: %d hours and %d minutes\n",hoursgap,minutesgap);



    return 0;

}
