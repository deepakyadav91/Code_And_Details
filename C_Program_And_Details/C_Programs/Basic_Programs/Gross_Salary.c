/* Write a C program to calculate the gross salary from basic salary */

#include<stdio.h>

int main(){

    float SAL,DA,HRA;

    printf("\n Enter Your Salary :- ");
    scanf("%f",&SAL);
    
    if ( SAL > 0 ) {
    DA = 0.4 * SAL;
    HRA = 0.2 * SAL;
    
    printf("\n DA From Salary :- %f \n HRA From Salary :- %f",DA,HRA );
    printf("\n Gross Salary :- %f \n",SAL + DA + HRA );
    }
    
    else if ( SAL <= 0 ) 
            printf("\n Please Enter A Correct Salary \n");
            
    printf("\n");        
    return 0;
    
}
    
