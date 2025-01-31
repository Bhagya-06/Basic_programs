#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char string[20], *arr[3];
    int i = 0, sum = 0;
    int days_in_months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    printf("Enter a date (YYYY-MM-DD): ");
    scanf("%s", string);
    char *date = strtok(string, "-"); // Splitting the input date using strtok()
    while (date != NULL && i < 3) {
        arr[i++] = date;
        date = strtok(NULL, "-");
    }
    // Convert to integer
    int month = atoi(arr[1]); 
    int day = atoi(arr[2]); 
    int year = atoi(arr[0]);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        days_in_months[1] = 29;  // if Leap year then feb has 29 days
    }
    for (i = 0; i < month - 1; i++) {
        sum += days_in_months[i]; //adding previous month days
    }
    sum += day; //adding present month days
    printf("Day of the year: %d\n", sum);
    return 0;
}
