#include <stdio.h>
int main () {

    char str[50];
    int i, num = 0;

    printf("Enter the numeric string : ");
    scanf("%s", str);

    for ( i = 0 ; str[i] != '\0' ; i++ ) {
        num = (num * 10) + (str[i] - '0');
    }

    printf("The integer format is : %d", num);

    return 0;
}
