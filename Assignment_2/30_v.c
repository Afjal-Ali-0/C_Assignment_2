#include <stdio.h>
int sum (int n) {
    if(n == 0)
        return 0;
    else
        return (n + sum(n-1));
}

int main (){
    int n;

    printf("Enter a number (n) : ");
    scanf("%d", &n);

    printf("1+2+3+4+5+...+n = %d", sum(n));

    return 0;
}