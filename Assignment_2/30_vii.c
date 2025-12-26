#include <stdio.h>

void str_cpy(char a[], char b[]){
    
    int i, n;
    
    for ( n = 0 ; a[n] != '\0' ; n++ );

    for ( i = 0 ; i < n ; i++ ){
        b[i] = a[i];
    }
    b[i] = '\0';
}

int main(){
    
    int n;
    char a[100], b[100];

    printf("Enter a string : ");
    gets(a);

    str_cpy(a,b);

    printf("Output : ");
    puts(b);

    return 0;
}
