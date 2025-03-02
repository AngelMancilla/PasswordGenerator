#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char LOWERCASE[] = "abcdefghijklmnopqrstuvwxyz";
const char UPPERCASE[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const char NUMBERS[] = "0123456789";
const char SYMBOLS[] = "!@#$%^&*()";

void generate_password(int length) {
    char includeLower, includeUpper, includeNumbers, includeSymbols;
    char availableCharacters[100] = "";

    printf("Include lowercase letters? (y/n): ");
    scanf(" %c", &includeLower);
    printf("Include uppercase letters? (y/n): ");
    scanf(" %c", &includeUpper);
    printf("Include numbers? (y/n): ");
    scanf(" %c", &includeNumbers);
    printf("Include symbols? (y/n): ");
    scanf(" %c", &includeSymbols);

    if (includeLower == 'y' || includeLower == 'Y') strcat(availableCharacters, LOWERCASE);
    if (includeUpper == 'y' || includeUpper == 'Y') strcat(availableCharacters, UPPERCASE);
    if (includeNumbers == 'y' || includeNumbers == 'Y') strcat(availableCharacters, NUMBERS);
    if (includeSymbols == 'y' || includeSymbols == 'Y') strcat(availableCharacters, SYMBOLS);

    if (strlen(availableCharacters) == 0) {
        printf("Error: No character types selected!\n");
        return;
    }

    char password[length + 1];
    for (int i = 0; i < length; i++) {
        int index = rand() % strlen(availableCharacters);
        password[i] = availableCharacters[index];
    }
    password[length] = '\0';

    printf("Generated Password: %s\n", password);
}

void clear_screen() {
#ifdef _WIN32
    system("cls");
#elif defined(__linux__) || defined(__APPLE__)
    system("clear");
#else
    printf("\n----------------------\n");
#endif
}

int main() {
    int length;
    char choice;

    srand(time(NULL));

    do {
        printf("Enter password length: ");
        if (scanf("%d", &length) != 1 || length <= 0) {
            printf("Enter a valid length!\n");
            while (getchar() != '\n')
            return 1;
        }

        generate_password(length);

        printf("\nGenerate another password? (y/n): ");
        scanf(" %c", &choice);

        clear_screen();

    } while (choice == 'y' || choice == 'Y');

    printf("Goodbye!\n");
    return 0;
}

