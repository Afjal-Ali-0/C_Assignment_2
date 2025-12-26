#include <stdio.h>
int main() {

    char a[] = {"COMPUTER"};

    for ( int i = 0 ; i < 8 ; i++ ) {
        for ( int j = 0 ; j < (8-i) ; j++ ) {
            printf("%c", a[j]);
        }
        printf("\n");
    }

    return 0;
}
