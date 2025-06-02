#include <stdio.h>

#define USD_TO_INR 83.15
#define EUR_TO_INR 90.20
#define GBP_TO_INR 106.35
#define JPY_TO_INR 0.53

void showMenu(); 
float convertToINR(float amount, float rate); 
float convertFromINR(float amount, float rate); 
void performConversion(int choice, float amount); 

int main() {
    int choice;
    float amount;

    printf("=====================================\n");
    printf("      Simple Currency Converter\n");
    printf("=====================================\n");

    showMenu();

    printf("\nEnter your choice (1-8): ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 8) {
        printf("Invalid choice. Please run the program again and choose between 1 and 8.\n");
        return 1;
    }

    printf("Enter the amount: ");
    scanf("%f", &amount);

    performConversion(choice, amount);

    return 0;
}

void showMenu() {
    printf("\nSelect the currency conversion option:\n");
    printf("  1. USD to INR\n");
    printf("  2. EUR to INR\n");
    printf("  3. GBP to INR\n");
    printf("  4. JPY to INR\n");
    printf("  5. INR to USD\n");
    printf("  6. INR to EUR\n");
    printf("  7. INR to GBP\n");
    printf("  8. INR to JPY\n");
}

float convertToINR(float amount, float rate) {
    return amount * rate;
}

float convertFromINR(float amount, float rate) {
    return amount / rate;
}

void performConversion(int choice, float amount) {
    float result;

    switch (choice) {
        case 1:
            result = convertToINR(amount, USD_TO_INR);
            printf("\nUSD %.2f = INR %.2f\n", amount, result);
            break;
        case 2:
            result = convertToINR(amount, EUR_TO_INR);
            printf("\nEUR %.2f = INR %.2f\n", amount, result);
            break;
        case 3:
            result = convertToINR(amount, GBP_TO_INR);
            printf("\nGBP %.2f = INR %.2f\n", amount, result);
            break;
        case 4:
            result = convertToINR(amount, JPY_TO_INR);
            printf("\nJPY %.2f = INR %.2f\n", amount, result);
            break;
        case 5:
            result = convertFromINR(amount, USD_TO_INR);
            printf("\nINR %.2f = USD %.2f\n", amount, result);
            break;
        case 6:
            result = convertFromINR(amount, EUR_TO_INR);
            printf("\nINR %.2f = EUR %.2f\n", amount, result);
            break;
        case 7:
            result = convertFromINR(amount, GBP_TO_INR);
            printf("\nINR %.2f = GBP %.2f\n", amount, result);
            break;
        case 8:
            result = convertFromINR(amount, JPY_TO_INR);
            printf("\nINR %.2f = JPY %.2f\n", amount, result);
            break;
        default:
            printf("Unexpected error occurred.\n");
    }
}
