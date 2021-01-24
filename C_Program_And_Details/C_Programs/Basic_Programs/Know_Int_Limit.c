/* A simple C program to know the limit of the int variable */

#include<stdio.h>

int main() {

    int a = 32767;
    
    
    printf("\n Value Of A :- %d",a);
    
    a = a + 10000;
    
    printf("\n Increased Value Of A By 10,000 :- %d \n",a); 
    printf("\n Now since the value is increased successfully then it is 32 bit otherwise it is a 16 bit compiler\n");
    
    return 0;
    
}
