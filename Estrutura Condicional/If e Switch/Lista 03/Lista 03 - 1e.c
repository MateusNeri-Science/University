#include <stdio.h>

int main () {

    int week ;

    printf("\nEnter a number from 1 to 7: ") ;
    scanf ("%d", &week) ;


    if (week == 1 ) {

        printf ("\nThe day of the week is Monday") ;
    
    } else if (week == 2) {

        printf ("\nThe day of the week is Tuesday") ;

    } else if (week == 3) {

        printf ("\nThe day of the week is Wednesday") ;

    } else if (week == 4) {

        printf ("\nThe day of the week is Thursday") ;

    } else if (week == 5) {

        printf ("\nThe day of the week is Friday") ;

    } else if (week == 6) {

        printf ("\nThe day of the week is Saturday") ;

    } else if (week == 7) {

        printf ("\nThe day of the week is Sunday") ;

    } else {

        printf ("\nThe number you entered is invalid") ;

    }

    return 0;
}