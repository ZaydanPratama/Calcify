#include <stdio.h>

int main() {
    float a, b, c;
    char op, y;

    printf("\nWelcome To My Calculator\n");

    while (1) {
        printf("Press Y For Continue, N For Exit: ");
        scanf(" %c", &y);
        if (y == 'Y' || y == 'y')
            break;
        else if (y == 'N' || y == 'n')
            return 0;
        else
            printf("Invalid! Try Again!\n");
    }

    printf("Input First Number: ");
    scanf("%f", &a);

    printf("Select The Operator : ");
    scanf(" %c", &op);

    printf("Input Second Number: ");
    scanf("%f", &b);

    switch (op) {
        case '+':
            c = a + b;
            printf("The Result Is %.2f\n", c);
            break;
        case '-':
            c = a - b;
            printf("The Result Is %.2f\n", c);
            break;
        case '*':
            c = a * b;
            printf("The Result Is %.2f\n", c);
            break;
        case '/':
            if (b != 0)
                printf("The Result Is %.2f\n", a / b);
            else
                printf("Error: Division by zero!\n");
            break;
        default:
            printf("Invalid Operator!\n");
    }

    return 0;
}
