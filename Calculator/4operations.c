#include <stdio.h>

int main() {
    int firstnumber;
    int secondnumber;
    char operator;
    printf("Enter first number: ");
    scanf("%d", &firstnumber);
    printf("Enter second number: ");
    scanf("%d", &secondnumber);
    printf("Select Operator: ");
    scanf("%s", &operator);
    if (operator == '*'){
        printf("Product: %d\n", firstnumber * secondnumber);
    } else if (operator == '/'){
        printf("Quotient: %d\n", firstnumber / secondnumber);
    } else if (operator == '+'){
        printf("Sum: %d\n", firstnumber + secondnumber);
    } else if (operator == '-'){
        printf("Difference: %d\n", firstnumber - secondnumber);
    } else {
        printf("Invalid Operator\n");
    }
    return 0;
}