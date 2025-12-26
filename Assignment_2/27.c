#include <stdio.h>
int main() {
    
    int i, j = 0;
    char a[100], b[100], c[200];

    printf("Enter first string : ");
    gets(a);
    printf("Enter second string : ");
    gets(b);

    for ( i = 0 ; a[i] != '\0' ; i++ ) {
        c[j++] = a[i];
    }
    c[j++] = ' ';
    for ( i = 0 ; b[i] != '\0' ; i++ ) {
        c[j++] = b[i];
    }
    c[j] = '\0';

    printf("Required Output : ");
    for ( i = (j-1) ; i >= 0 ; i-- ) {
        printf("%c", c[i]);
    }

    return 0;
}
