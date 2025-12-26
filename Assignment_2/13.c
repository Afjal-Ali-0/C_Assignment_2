#include <stdio.h>
int main() {

    int n, i, j, flag;

    printf("Enter order of the matrix : ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter the elements of the matrix :\n");
    for ( i= 0 ; i < n ; i++ ) {
        for ( j = 0 ; j < n ; j++ ) {
            scanf("%d", &a[i][j]);
        }
    }

    flag = 0;
    for ( i= 0 ; i < n ; i++ ) {
        for ( j = 0 ; j < n ; j++ ) {
            if (( i != j) && ( a[i][j] != 0 )) {
                flag = 1;
                break;
            }
        }
    }
    if ( flag == 0 ) {
        printf("The given matrix is a diagonal matrix.\n");
    }

    flag = 0;
    for ( i= 0 ; i < n ; i++ ) {
        for ( j = 0 ; j < n ; j++ ) {
            if (( i < j) && ( a[i][j] != 0 )) {
                flag = 1;
                break;
            }
        }
    }
    if ( flag == 0 ) {
        printf("The given matrix is an upper triangular matrix.\n");
    }

    flag = 0;
    for ( i= 0 ; i < n ; i++ ) {
        for ( j = 0 ; j < n ; j++ ) {
            if (( i > j) && ( a[i][j] != 0 )) {
                flag = 1;
                break;
            }
        }
    }
    if ( flag == 0 ) {
        printf("The given matrix is a lower triangular matrix.\n");
    }

    return 0;
}