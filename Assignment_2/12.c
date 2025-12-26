#include <stdio.h>
int main() {

    int i, j, m, n;

    printf("Enter number of rows of the matrix : ");
    scanf("%d", &m);
    printf("Enter number of columns of the matrix : ");
    scanf("%d", &n);

    int a[m][n];

    printf("Enter elements of the matrix :\n");
    for ( i = 0 ; i < m ; i++ ) {
        for ( j = 0 ; j < n ; j++ ) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The transpose of the matrix is :\n");
    for ( j = 0 ; j < n ; j++ ) {
        for ( i = 0 ; i < m ; i++ ) {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
