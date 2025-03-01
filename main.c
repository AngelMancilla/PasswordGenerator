#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CHARACTERS "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()"

void generate_password(int length) {
    int char_count = sizeof(CHARACTERS) - 1;

    printf("Password generated: ");
    for (int i = 0; i < length; i++) {
        putchar(CHARACTERS[rand() % char_count]);
    }
    printf("\n");
}

void clear_screen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main(void) {
    int length;
    char choice;

    srand(time(NULL));

    do {
        printf("\nEnter password length: ");
        scanf("%d", &length);

        if (length <= 0) {
            printf("Enter a valid length!\n");
            continue;
        }

        generate_password(length);

        printf("\nGenerate another password? (y/n): ");
        scanf(" %c", &choice);

        clear_screen();

    } while (choice == 'y' || choice == 'Y');

    printf("Goodbye!\n");

    return 0;
}
