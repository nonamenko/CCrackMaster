#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

// Function to obfuscate characters
char obfuscate(char c) {
    return c ^ 0x5A;
}

// Function to get the obfuscated correct password
void getObfuscatedPassword(char *obf_password) {
    const char *password = "SecurePass123";
    size_t len = strlen(password);
    for (size_t i = 0; i < len; i++) {
        obf_password[i] = obfuscate(password[i]);
    }
    obf_password[len] = '\0';
}

// Function to check the password
int checkPassword(const char *input) {
    const char *password = "SecurePass123";
    // Obfuscated correct password
    char obf_password[50];
    getObfuscatedPassword(obf_password);

    // Obfuscate the input password
    char obf_input[50];
    size_t len = strlen(input);
    for (size_t i = 0; i < len && i < sizeof(obf_input) - 1; i++) {
        obf_input[i] = obfuscate(input[i]);
    }
    obf_input[len] = '\0';

    // Compare the obfuscated strings
    if (strcmp(obf_input, obf_password) == 0) {
        return 1; // Correct password
    } else {
        return 0; // Incorrect password
    }
}

int main() {
    char input[100];

    printf("Welcome to CCrackMaster!\n");
    printf("Please enter the activation password: ");

    // Read user input
    if (fgets(input, sizeof(input), stdin) != NULL) {
        // Remove newline character if present
        size_t len = strlen(input);
        if (len > 0 && input[len - 1] == '\n') {
            input[len - 1] = '\0';
        }

        // Small delay to complicate analysis
        clock_t start_time = clock();
        while ((clock() - start_time) < (CLOCKS_PER_SEC / 2)) {
            // Empty loop for delay
        }

        if (checkPassword(input)) {
            printf("Congratulations! You have cracked CCrackMaster.\n");
        } else {
            printf("Incorrect password. Please try again.\n");
        }
    } else {
        printf("Error reading input.\n");
    }

    return 0;
}
