#include <stdio.h>
void str_rev(char a[]) {
    int i, j = 0;
    char ch;

    for ( i = 0 ; a[i] != '\0' ; i++ );
    i--;

    while (i > j) {
        ch = a[i];
        a[i] = a[j];
        a[j] = ch;

        i--;
        j++;
    }
}
int main() {
    char a[100];

    printf("Enter a string : ");
    gets(a);

    str_rev(a);

    printf("Output : ");
    puts(a);

    return 0;
}
