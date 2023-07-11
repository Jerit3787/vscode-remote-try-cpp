#include <stdio.h>

int main() {
    float totalPrice;
    int noPerson, typeRice;
    char option;

    printf("Welcome to Zakat Calculator!\n");

    do {
        printf("\nNumber of person: ");
        scanf("%d", &noPerson);
        printf("Type of rice: ");
        while(typeRice < 1 || typeRice > 3) {
            scanf("%d", &typeRice);
            if (typeRice < 1 || typeRice > 3) {
                printf("Invalid! Please enter correct type for rice: ");
            }
        }
    } while (option == 'n');
}