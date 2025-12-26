#include <stdio.h>
int main() {
    
    int i, j, count = 0;
    char sen[300], wrd[50];
    
    printf("Enter the sentence : ");
    gets(sen);
    printf("Enter the word : ");
    gets(wrd);

    for ( i = 0 ; sen[i] != '\0' ; i++ ) {
        
        j = 0;
        
        while ((sen[i+j] == wrd[j]) && (wrd[j] != '\0')) {
            j++;
        }
        
        if (wrd[j] == '\0') {
            count++;
        }
    }

    printf("Number of occurance of that word is %d.", count);
}
