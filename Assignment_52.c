#include <stdio.h>

int main() {
    int n = 4;        
    int i, j, k;
    char c = 'A';

    for (i = 1; i <= n; i++) {
        for (k = 0; k < (n - i) * 2; k++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("%c", c++);
            if (j < i) printf(" "); 
        }
        printf("\n");
    }

    return 0;
}
