// Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>
int main(){
    char date[11], month[12][4]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%s", date);
    int m = (date[3] - '0') * 10 + (date[4] - '0');
    if(m >= 1 && m <= 12){
        printf("%.2s-%s-%s\n", date, month[m-1], date+6);
    } else {
        printf("Invalid month\n");
    }
    return 0;
}