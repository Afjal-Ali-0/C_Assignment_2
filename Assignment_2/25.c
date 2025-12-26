#include <stdio.h>
int main() {
    int dd, mm, yyyy;
    char date[11];
    char month[12][10] = {"January", "February", "March", "April", "May", 
        "June", "July", "August", "September", "October", "November", "December"};

    printf("Enter date (dd/mm/yyyy) : ");
    gets(date);

    dd = (date[0] - '0') * 10 + (date[1] - '0');
    mm = (date[3] - '0') * 10 + (date[4] - '0');
    yyyy = (date[6] - '0') * 1000 + (date[7] - '0') * 100 +(date[8] - '0') * 10 +(date[9] - '0');

    printf("%d-%s-%d", dd, month[mm-1], yyyy);

    return 0;
}
