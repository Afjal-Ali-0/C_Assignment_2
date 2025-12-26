#include <stdio.h>
int main() {

    int n, i, j, k;

    printf("Enter the order of the matrices : ");
    scanf("%d", &n);

    int a[n][n], b[n][n], sum[n][n], diff[n][n], pdt[n][n];

    printf("Enter the elements of the first matrix :\n");
    for ( i = 0 ; i < n ; i++ ){
        for ( j = 0 ; j < n ; j++ ){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Now enter the elements of the second matrix :\n");
    for ( i = 0 ; i < n ; i++ ){
        for ( j = 0 ; j < n ; j++ ){
            scanf("%d", &b[i][j]);
        }
    }

    for ( i = 0 ; i < n ; i++ ){
        for ( j = 0 ; j < n ; j++ ){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    for ( i = 0 ; i < n ; i++ ){
        for ( j = 0 ; j < n ; j++ ){
            diff[i][j] = a[i][j] - b[i][j];
        }
    }
    for ( i = 0 ; i < n ; i++ ){
        for ( j = 0 ; j < n ; j++ ){
            pdt[i][j] = 0;
        }
    }
    for ( i = 0 ; i < n ; i++ ){
        for ( j = 0 ; j < n ; j++ ){
            for ( k = 0 ; k < n ; k++ ){
                pdt[i][j] += (a[i][k] * b[k][j]);
            }
        }
    }

    printf("The sum of the matrices is :\n");
    for ( i = 0 ; i < n ; i++ ){
        for ( j = 0 ; j < n ; j++ ) {
            printf("\t%d", sum[i][j]);
        }
        printf("\n");
    }
    printf("The difference of the matrices is :\n");
    for ( i = 0 ; i < n ; i++ ){
        for ( j = 0 ; j < n ; j++ ) {
            printf("\t%d", diff[i][j]);
        }
        printf("\n");
    }
    printf("The product of the matrices is :\n");
    for ( i = 0 ; i < n ; i++ ){
        for ( j = 0 ; j < n ; j++ ) {
                printf("\t%d", pdt[i][j]);
        }
        printf("\n");
    }

    return 0;
}
