/* A simple program to calculate number of digits of a number */

#include<stdio.h>

int main()
{

    int x,y;
    
    printf("\n Enter A Number :- ");
    scanf("%d",&x);
    
    if ( x > 0 ) {
    
        for ( y = 0 ; x != 0 ; y++ )
             x = x / 10;
         
        printf("\n Total Digits Are :- %d",y);
    }
    else
        printf("\n Please Enter A Correct Number");
    
    printf("\n");
    return 0;
    
}
