#include <stdio.h>

int fact(int n, int f){
    if(n == 0 || n == 1)
        return f;
    else
        return fact(n-1, f*n);
}

int main(){
    int n;

    printf("Enter a number to find its factorial : ");
    scanf("%d", &n);

    printf("Factorial of that number = %d", fact(n,1));

    return 0;
}
