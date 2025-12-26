#include <stdio.h>
int main() {

    int i, vwl = 0, dig = 0, wrd = 1;
    char a[250];

    printf("Enter a sentence :\n");
    gets(a);

    for ( i = 0 ; a[i] != '\0' ; i++ ) {
        if ( a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ) {
            vwl++;
        }
        if ( a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U' ) {
            vwl++;
        }
    }
    printf("There are %d vowels in the sentence.", vwl);

    for ( i = 0 ; a[i] != '\0' ; i++ ) {
        if (((a[i] >= 'a') && (a[i] <= 'z')) || ((a[i] >= 'A') && (a[i] <= 'Z'))) {
            dig++;
        }
    }
    printf("\nThere are %d digits in the sentence.", dig);

    for ( i = 0 ; a[i] != '\0' ; i++ ) {
        if (a[i] == ' ') {
            wrd++;
        }
    }
    printf("\nThere are %d words in the sentence.", wrd);

    return 0;
}
