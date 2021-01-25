/* A simple C program to convert the input given in KM to meter, feet, inch, and CM */

#include<stdio.h>

int main()
{

    // Here double is needed to process the calculations which are higher than the given range
    double km;
    
    printf("\n Enter the distance in KM :- ");
    scanf("%lf",&km);
    
    printf("\n Distance %lf KM in Meters is :- %lf",km,km * 1000);
    printf("\n Distance %lf KM in Feet   is :- %lf",km,km * 3281);
    printf("\n Distance %lf KM in Inch   is :- %lf",km,km * 39370);
    printf("\n Distance %lf KM in CM     is :- %lf",km,km * 100000);
    
    
    printf("\n");
    return 0;
    
}
