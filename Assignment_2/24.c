#include <stdio.h>
int main() {
    
    int i, maxCount = 0, freq[256] = {0};
    char maxChar, str[300];

    printf("Enter a string : ");
    gets(str);

    for ( i = 0 ; str[i] != '\0' ; i++ ) {
        freq[str[i]]++;
    }

    for ( i = 0 ; i < 256 ; i++ ) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            maxChar = i;
        }
    }

    printf("The most frequent character : %c", maxChar);
    printf("\nThat character appears %d times.", maxCount);
    return 0;
}
