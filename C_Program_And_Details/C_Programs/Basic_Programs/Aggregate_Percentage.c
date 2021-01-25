/* A simple program to calculate percentage of the student */

#include<stdio.h>

int main()
{

    int SB1,SB2,SB3,SB4,SB5;
    
    printf("\n Enter The First Subject Marks :- ");
    scanf("%d",&SB1);
    
    printf("\n Enter The Second Subject Marks :- ");
    scanf("%d",&SB2);
    
    printf("\n Enter The Third Subject Marks :- ");
    scanf("%d",&SB3);
    
    printf("\n Enter The Fourth Subject Marks :- ");
    scanf("%d",&SB4);
    
    printf("\n Enter The Fifth Subject Marks :- ");
    scanf("%d",&SB5);
    
    if ( ( SB1 <= 0 ) || ( SB2 <= 0 ) || ( SB3 <= 0 ) || ( SB4 <= 0 ) || ( SB5 <= 0 ) )
        printf("\n Please Enter The Details Correctly ");
    else
        printf("\n Your Percentage Is :- %.2f",(float)( SB1 + SB2 + SB3 + SB4 + SB5 ) / 5 );
    
    printf("\n");
    return 0;
    
}
