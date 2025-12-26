#include <stdio.h>
int main() {

    int val, dec = 0, i = 0, flag = 0;
    char hex[100];

    printf ("Enter the hexa-decimal number : ");
    scanf("%s", hex);

    while ( hex[i] != '\0') {
        if ( hex[i]>='0' && hex[i]<='9' ) {
            val = hex[i] - '0';
        }
        else if ( hex[i]>='A' && hex[i]<='F' ) {
            val = hex[i] - 'A' + 10;
        }
        else if ( hex[i]>='a' && hex[i]<='f' ) {
            val = hex[i] - 'a' + 10;
        }
        else {
            flag = 1;
            break;
        }

        dec = (dec * 16) + val;

        i++;
    }

    if (flag) {
        printf("WRONG symbol used\nUse proper symbol");
    }
    else {
        printf("The equivalent decimal number is : %d", dec);
    }

    return 0;
}
