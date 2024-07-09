#include <stdio.h>

int main () {

    int month ;

    printf("Enter a number from 1 to 12: ") ;
    scanf ("%d", &month) ;

    if (month >= 1 && month <= 3) {

        printf ("The season of the year is summer");

    } else if (month >= 4 && month <= 6) {

        printf ("The season of the year is autumn");

    } else if (month >= 7 && month <= 9) {

        printf ("The season of the year is winter");

    } else if (month >= 10 && month <= 12) {

        printf ("The season of the year is spring");

    } else {

        printf ("The number you entered is invalid") ;
    }
    
    return 0;
}
