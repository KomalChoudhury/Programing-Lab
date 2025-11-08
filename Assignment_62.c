#include <stdio.h>
#include <string.h>

int main() {
    char str[50], rev[50];
    int i, len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len; i++)
        rev[i] = str[len - i - 1];
    rev[len] = '\0';

    if (strcmp(str, rev) == 0)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
