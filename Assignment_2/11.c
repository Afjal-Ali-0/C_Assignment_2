#include <stdio.h>
int main() {

    int n, i, j, count = 0, flag = 0, a[100];

    printf("Enter a integer number : ");
    scanf("%d", &n);

    while ( n > 0 ) {
        a[count] = (n % 10);
        count++;
        n /= 10;
    }

    for( i = 0 ; i < count ; i++ ) {
        for ( j = (i+1) ; j < count ; j++ ) {
            if (a[i] == a[j]) {
                flag = 1;
                break;
            }
        }
    }

    if (!flag) {
        printf("All the digits of the number are unique.");
    }
    else {
        printf("Not all the digits of the number are unique.");
    }

    return 0;
}
