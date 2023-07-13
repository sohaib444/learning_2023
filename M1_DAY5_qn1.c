#include <stdio.h>

// Define the structure for a box
struct Box {
    double length;
    double width;
    double height;
};

// Function to calculate the volume of a box
double calculateVolume(struct Box *boxPtr) {
    return boxPtr->length * boxPtr->width * boxPtr->height;
}

// Function to calculate the total surface area of a box
double calculateSurfaceArea(struct Box *boxPtr) {
    return 2 * (boxPtr->length * boxPtr->width + boxPtr->width * boxPtr->height + boxPtr->height * boxPtr->length);
}

int main() {
    // Declare and initialize a box using a structure
    struct Box myBox = { 5.0, 3.0, 2.0 };

    // Create a pointer to the box structure
    struct Box *boxPtr = &myBox;

    // Calculate the volume using the structure pointer and dot operator
    double volume = boxPtr->length * boxPtr->width * boxPtr->height;

    // Calculate the total surface area using the structure pointer and arrow operator
    double surfaceArea = 2 * (boxPtr->length * boxPtr->width + boxPtr->width * boxPtr->height + boxPtr->height * boxPtr->length);

    printf("Volume of the box: %.2f\n", volume);
    printf("Surface area of the box: %.2f\n", surfaceArea);

    return 0;
}
//structure sol 1