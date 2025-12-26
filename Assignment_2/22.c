#include <stdio.h>
int main() {

    char a[300];

    printf("Enter a sentence :\n");
    gets(a);

    for ( int i = 0 ; a[i] != '\0' ; i++ ) {
        if ((a[i] >= 'a') && (a[i] <= 'z')) {
            a[i] -= ('a' - 'A');
        }
    }

    printf("Here is the same sentence in all capitals :\n");
    puts(a);

    return 0;
}