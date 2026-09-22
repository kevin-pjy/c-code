#include <stdio.h>
int main()
{
    int x;
    int one;
    int two;
    int five;
    printf("Enter a number: ");
    scanf("%d", &x);
    for(one=1;one<=x*10;one++){
        for(two=1;two<=x*20;two++){
            for(five=1;five<=x*50;five++){
                if(one+two*2+five*5==x*10){
                    printf("%d one and %d two and %d five combine %d\n",one,two,five,x);
                    //goto out;
                }
            }
            
    
            }
        }//out:
        return 0;
    }


