#include <stdio.h>

int main() {

    int i = 0, n, a[100];

    printf("Enter a decimal number : ");
    scanf("%d", &n);

    while(n > 0) {
        a[i] = (n % 2);
        i++;
        n /= 2;
    }

    i--;

    printf("The equivalent binary number is : ");
    while (i >= 0) {
        printf("%d", a[i]);
        i--;
    }

    return 0;

}
