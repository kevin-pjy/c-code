#include <stdio.h>

int main()
{
    int grade;

    printf("Enter your grade: ");

    scanf("%d", &grade);

    int class=grade/10;

    switch(class)
{
    case 10:
    case 9:
    printf("your grade is A");
    break;
    
    case 8:
    printf("your grade is B");
    break;
    
    case 7:
    printf("your grade is C");
    break;

    case 6:
    printf("your grade is D");
    break;

    default:
    printf("your grade is F");

}
return 0;
}