#include <stdio.h>
#include <string.h>
int main() {
    
    char fname[30], mname[30], lname[30];

    printf("Enter your full name : "); 
    scanf("%s%s%s", fname, mname, lname);

    printf("Output 1 : %c.%c.%s", fname[0], mname[0], lname);
    printf("\nOutput 2 : %c.%c.%c", fname[0], mname[0], lname[0]);

    return 0;

}
