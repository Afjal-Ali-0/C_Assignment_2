#include <stdio.h>

int main() {

    int i = 0, n, a[100];

    printf("Enter a decimal number : ");
    scanf("%d", &n);

    while(n > 0) {
        a[i] = (n % 16);
        i++;
        n /= 16;
    }

    i--;

    printf("The equivalent hexa-decimal number is : ");
    while (i >= 0) {
        if( a[i] > 9 )
            printf("%c", (a[i]+55));
        else
            printf("%d", a[i]);
        i--;
    }

    return 0;

}
