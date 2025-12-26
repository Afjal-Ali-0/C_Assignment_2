#include <stdio.h>
int main () {

    int i, j, k = 0, count = 0;
    char a[200];
    
    printf ("Enter the sentence :\n");
    gets(a);
    
    for( i = 0 ; a[i] != '\0' ; i++ ) {
        if (a[k] == ' ') {
            count++;
        }
        if (count == 2) {
            for ( j = k ; a[j] != '\0' ; j++ ) {
                a[j] = a[j+1];
            }
            a[j] = '\0';
            count--;
            continue;
        }
        if (a[k] != ' ') {
            count = 0;
        }

        k++;
    }

    printf("Here is the sentence with all the multiple spaces removed :\n");
    puts(a);

    return 0;
}
