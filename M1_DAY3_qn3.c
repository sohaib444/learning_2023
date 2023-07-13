#include <stdio.h>

int findLargestNumber(int num) {
    int largest = 0;

    // Extract each digit and delete it once to find the largest number
    for (int i = 0; i < 4; i++) {
        int temp = num / (int)pow(10, i + 1) * (int)pow(10, i) + num % (int)pow(10, i);
        if (temp > largest) {
            largest = temp;
        }
    }

    return largest;
}

int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    if (num < 1000 || num > 9999) {
        printf("Invalid input! Please enter a 4-digit number.\n");
        return 1;
    }

    int largestNumber = findLargestNumber(num);
    printf("The largest number after deleting a single digit from %d is: %d\n", num, largestNumber);

    return 0;
}