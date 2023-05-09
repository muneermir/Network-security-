#include <stdio.h>

// Function to encrypt the message using Caesar cipher
void encrypt(char message[], int shift) {
    int i = 0;
    char ch;

    while (message[i] != '\0') {
        ch = message[i];

        if (ch >= 'a' && ch <= 'z') {
            ch = ((ch - 'a' + shift) % 26) + 'a';
        } else if (ch >= 'A' && ch <= 'Z') {
            ch = ((ch - 'A' + shift) % 26) + 'A';
        }

        message[i] = ch;
        i++;
    }
}

int main() {
    char message[100];
    int shift;

    printf("Enter a message: ");
    fgets(message, sizeof(message), stdin);

    printf("Enter the shift value: ");
    scanf("%d", &shift);

    encrypt(message, shift);

    printf("Encrypted message: %s\n", message);

    return 0;
}

