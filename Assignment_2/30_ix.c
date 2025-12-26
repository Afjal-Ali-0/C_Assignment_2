#include <stdio.h>

int rev(int n, int f){

    if (n == 0)
        return f;
    else
        return rev((n/10), ((f * 10) + (n % 10)));
}

int main(){

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("Output : %d", rev(n,0));

    return 0;
}
