#include <stdio.h>

int prime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2 ; i <= (n/2) ; i++ ) {
        if ((n % i) == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {

    int n, rev = 0, x, y;

    printf("Enter the number : ");
    scanf("%d", &n);

    x = prime (n);

    while (n) {
        rev = (rev * 10) + (n % 10);
        n /= 10;
    }

    y = prime (rev);

    if (x && y) {
        printf("The number is TWISTED PRIME.");
    }
    else {
        printf("The number is NOT TWISTED PRIME.");
    }

    return 0;
}
