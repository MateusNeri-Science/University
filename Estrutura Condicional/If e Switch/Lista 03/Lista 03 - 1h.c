#include <stdio.h>

int main () {

    int day, month, year, day1 ;

    printf ("\nEnter the date (DD MM AA): ");
    scanf ("%d %d %d", &day, &month, &year);

    if (month < 1 || month > 12) {

        printf ("\nA data %2d/%2d/%d, esta invalida!", day, month, year);

    } else {

        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 ||month == 12 ) {

            day1 = 31;

        } else if (month == 4 || month == 6 || month == 9 || month == 11) 
        {
            day1 = 30;

        } else if (month = 2)
        {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            {
                day1 = 29;
            }
            else
            {
                day1 = 28 ;
            }
            
        } else
        {
            printf("\nData invalida");
        }
        
        if (day < 1 || day > day1)
        {
            printf ("\nA data %2d/%2d/%d e invalida!", day, month, year);
        }
        else
        {
            printf ("\nA data %2d/%2d/%d e valida!", day, month, year);
        }

    } 
   
    return 0;
}
