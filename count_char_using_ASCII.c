#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read a string including spaces

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Find if character is letter using ASCII values
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // Convert uppercase to lowercase
            ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

            // To find vowels
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
