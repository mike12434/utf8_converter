#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>  // For locale settings

void binaryToUTF32(const char *binaryString, uint32_t *utf32Char) {
    // Convert the binary string to an unsigned integer
    *utf32Char = 0;
    for (int i = 0; i < 32; i++) {
        *utf32Char <<= 1;
        if (binaryString[i] == '1') {
            *utf32Char |= 1;
        }
    }
}

void printUTF32Char(uint32_t utf32Char) {
    // Print the UTF-32 character if it's in the valid range
    if (utf32Char >= 0x00000020 && utf32Char <= 0x10FFFF) {
        printf("UTF-32 Character: %lc\n", (wchar_t)utf32Char);
    } else {
        printf("Invalid or non-printable UTF-32 character: U+%04X\n", utf32Char);
    }
}

int main() {
    // Set the locale to support wide character printing
    setlocale(LC_ALL, "");

    char binaryString[33];  // Buffer for 32-bit binary string + null terminator
    uint32_t utf32Char;

    // Ask user for input
    printf("Enter a 32-bit binary string: ");
    scanf("%32s", binaryString);

    // Ensure the input length is exactly 32 bits
    if (strlen(binaryString) != 32) {
        printf("Error: You must enter a 32-bit binary string.\n");
        return 1;
    }

    // Convert the binary string to UTF-32
    binaryToUTF32(binaryString, &utf32Char);

    // Print the UTF-32 character
    printUTF32Char(utf32Char);

    return 0;
}
