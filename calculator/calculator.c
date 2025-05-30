#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[100];
    double num1, num2;
    char op;
    char choice;

    while (1) {
        printf("\nEnter an expression (e.g., 2+3): ");
        scanf("%s", input);

        // Parse the input: number operator number
        if (sscanf(input, "%lf%c%lf", &num1, &op, &num2) != 3) {
            printf("Invalid format. Use format like 2+3\n");
            continue;
        }

        switch (op) {
            case '+':
                printf("Result: %.2lf\n", num1 + num2);
                break;
            case '-':
                printf("Result: %.2lf\n", num1 - num2);
                break;
            case '*':
                printf("Result: %.2lf\n", num1 * num2);
                break;
            case '/':
                if (num2 == 0)
                    printf("Error: Division by zero.\n");
                else
                    printf("Result: %.2lf\n", num1 / num2);
                break;
            default:
                printf("Unsupported operator '%c'\n", op);
        }

        printf("Do you want to calculate again? (y/n): ");
        scanf(" %c", &choice);
        if (choice == 'n' || choice == 'N') {
            printf("Goodbye.\n");
            break;
        }
    }

    return 0;
}
