#include <stdio.h>
int main() {

    int n, i, j, k, a[100] = {0};
    a[0] = 1;

    printf("Enter number of rows : ");
    scanf("%d", &n);

    printf("Here is the required Pascal's Triangle :\n");
    for( i = 0 ; i < n ; i++ ) {
        for( j = n ; j > (i+1) ; j--) {
            printf(" ");
        }
        for ( k = 0 ; k <= i ; k++ ) {
            printf("%d ", a[k]);
        }
        while ( k > 0 ) {
            a[k] += a[k-1];
            k--;
        }
    printf("\n");
    }

    return 0;
}
