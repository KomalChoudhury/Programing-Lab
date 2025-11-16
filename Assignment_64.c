#include <stdio.h>

struct Book {
    int id;
    char name[50];
    float price;
};

int main() {
    struct Book books[10];
    int i;

    
    for(i = 0; i < 10; i++) {
        printf("\nEnter details of book %d:\n", i + 1);
        printf("Book ID: ");
        scanf("%d", &books[i].id);

        printf("Book Name: ");
        scanf("%s", books[i].name);   

        printf("Book Price: ");
        scanf("%f", &books[i].price);
    }

    return 0;
}

