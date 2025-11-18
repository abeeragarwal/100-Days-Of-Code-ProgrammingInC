// Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
/*
Output 1:
SUNDAY = 0
MONDAY = 1
TUESDAY = 2
WEDNESDAY = 3
THURSDAY = 4
FRIDAY = 5
SATURDAY = 6
*/

#include <stdio.h>

enum Days { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main() {
    char *day_names[] = {"SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY"};
    
    enum Days day;
    for (day = SUNDAY; day <= SATURDAY; day++) {
        printf("%s = %d\n", day_names[day], day);
    }
    return 0;
}