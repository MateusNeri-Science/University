#include <stdio.h>

int main (){
    
    int year, rest ;
    
    printf ("\nEnter the year you want to know if it is a leap year: ") ;
    scanf ("%d", &year) ;
    
    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        
        printf ("\nThe year reported is a leap year") ;
        
    } else {
        
        printf ("\nThe year entered is not a leap year") ;
        
    }
    
    return 0;
}