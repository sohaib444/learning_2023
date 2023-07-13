#include <stdio.h>

void print_bits(unsigned int num) {
    int i;
    unsigned int mask = 1 << 31; // Start with the leftmost bit

    for (i = 0; i < 32; i++) {
        // Use bitwise AND operator to check if the bit is set
        if (num & mask) {
            printf("1");
        } else {
            printf("0");
        }

        // Shift the mask to the right by 1 bit
        mask >>= 1;

        // Print a space every 8 bits for better readability
        if ((i + 1) % 8 == 0) {
            printf(" ");
        }
    }

    printf("\n");
}

int main() {
    unsigned int num;

    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);

    printf("Bits: ");
    print_bits(num);

    return 0;
}