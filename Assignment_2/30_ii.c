#include <stdio.h>

int count (int n) {

    if (n == 0){
        return 0;
    }
    return (1 + count(n/10));
}

int main () {

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("Number of digits here is : %d", count(n));

    return 0;
}
