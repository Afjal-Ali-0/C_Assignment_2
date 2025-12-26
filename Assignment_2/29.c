#include <stdio.h>
int main () {

    int i = 0, start, end;
    char str[300];

    printf("Enter a string : ");
    gets(str);

    while (str[i] != '\0') {
        while (str[i] == ' ') {
            i++;
        }
        start = i;
        while ((str[i] != ' ') && (str[i] != '\0')) {
            i++;
        }
        end = (i-1);
        while (end >= start) {
            printf("%c", str[end]);
            end--;
        }
        if (str[i] == ' ') {
            printf(" ");
        }
    }

    return 0;
}
