#include <stdio.h>
int main () {

    int i, j = 0, flag = 0;
    char a[100];

    printf("Enter a word : ");
    gets(a);

    for ( i = 0 ; a[i] != '\0' ; i++ );
    i--;

    while ( i > j ) {
        if (a[i] != a[j]) {
            flag++;
            break;
        }
        i--;
        j++;
    }

    if (flag){
        printf("The word is not a Palindrome.");
    }
    else {
        printf("The word is a Palindrome.");
    }

    return 0;
}
