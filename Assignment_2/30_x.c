#include <stdio.h>

int fib(int n){

    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    else
        return (fib(n-1) + fib(n-2));
}

int main(){

    int i, n;

    printf("Enter the value of 'n' : ");
    scanf("%d", &n);

    printf("Here is the required fibonacci series :\n");
    for ( i = 1 ; i <= n ; i++ ){
        printf("  %d", fib(i));
    }

    return 0;
}
