/*

* This program will tell the user the number of days in the given month and year.

*

* Author: Cesar Alejandro Arias Perales

* Date: August 29th, 2018

* Email:a01411995@itesm.mx

*

*/

#include <stdio.h>

int main() {

// Declaration of variables

    int month;
    signed int year;


// In this part I ask the user for any month or year
    printf("Give a month and a year.\n");
    scanf_s("%i%d", &month, &year);

// This part states that months should only go from 1 to 12.
    if(month > 0 && month < 13){

        switch(month) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                printf("The month has 31 days.\n"); // There are 7 different months with 31 days.
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                printf("The month has 30 days.\n"); // There are 4 different months with 30 days.
                break;
            case 2:
                if(year % 4 == 0){ // February in Leap-Years has 29 days, this allows to get the correct number of days.
                    printf("The month has 29 days.\n");
                } else { // If it's not a Leap-Year, February has 28 days.
                    printf("The month has 28 days.\n");
                }
        }
    } else { // If the user gives an invalid number, the program will let him know.
        printf("That's not a month.\n");
    }

// This part tells the user the total number of days of the year, also depending if it's a Leap-Year or not.
    if(year % 4 == 0){
        printf("The year has 366 days.\n");
    } else {
        printf("The year has 365 days.\n");
    }

    return 0;
}

