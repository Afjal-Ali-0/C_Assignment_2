#include <stdio.h>

int pwr(int a , int b) {
    if (b == 0)
        return 1;
    else
        return (a * pwr(a , b-1));
}

int main() {
    int a, b;

    printf("Enter two numbers :\n");
    scanf("%d %d", &a, &b);

    printf("The %dth power of %d = %d", b, a, pwr(a,b));

    return 0;
}
