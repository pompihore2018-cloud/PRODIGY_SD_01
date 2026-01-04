#include <stdio.h>

int main() {
    int choice;
    float temp, celsius, fahrenheit, kelvin;

    printf("=====================================\n");
    printf("  Temperature Conversion Program\n");
    printf("        PRODIGY_SD_01\n");
    printf("=====================================\n\n");

    printf("Select the temperature unit:\n");
    printf("1. Celsius\n");
    printf("2. Fahrenheit\n");
    printf("3. Kelvin\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    printf("\nEnter the temperature value: ");
    scanf("%f", &temp);

    if (choice == 1) {
        celsius = temp;
        fahrenheit = (celsius * 9 / 5) + 32;
        kelvin = celsius + 273.15;
    }
    else if (choice == 2) {
        fahrenheit = temp;
        celsius = (fahrenheit - 32) * 5 / 9;
        kelvin = celsius + 273.15;
    }
    else if (choice == 3) {
        kelvin = temp;
        celsius = kelvin - 273.15;
        fahrenheit = (celsius * 9 / 5) + 32;
    }
    else {
        printf("\n❌ Invalid choice!\n");
        return 0;
    }

    printf("\n====== Converted Temperatures ======\n");
    printf("Celsius     : %.2f °C\n", celsius);
    printf("Fahrenheit  : %.2f °F\n", fahrenheit);
    printf("Kelvin      : %.2f K\n", kelvin);
    printf("===================================\n");

    return 0;
}
