
#include <stdio.h>
#include <math.h>

int main(void) {
    int choice;
    double a, b, result;
    const double PI = acos(-1.0);

    do {
        printf("\n===== C Scientific Calculator =====\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Exponentiation (x^y)\n");
        printf("6. Square Root\n");
        printf("7. Sine (sin)\n");
        printf("8. Cosine (cos)\n");
        printf("9. Tangent (tan)\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input.\n");
            return 1;
        }

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                printf("Result = %g\n", a + b);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                printf("Result = %g\n", a - b);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                printf("Result = %g\n", a * b);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);

                if (b == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                } else {
                    printf("Result = %g\n", a / b);
                }
                break;

            case 5:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &a, &b);
                result = pow(a, b);

                if (isnan(result) || isinf(result)) {
                    printf("Error: Invalid result.\n");
                } else {
                    printf("Result = %g\n", result);
                }
                break;

            case 6:
                printf("Enter a number: ");
                scanf("%lf", &a);

                if (a < 0) {
                    printf("Error: Square root of a negative number "
                           "is not real.\n");
                } else {
                    printf("Result = %g\n", sqrt(a));
                }
                break;

            case 7:
                printf("Enter angle in degrees: ");
                scanf("%lf", &a);
                printf("Result = %g\n", sin(a * PI / 180.0));
                break;

            case 8:
                printf("Enter angle in degrees: ");
                scanf("%lf", &a);
                printf("Result = %g\n", cos(a * PI / 180.0));
                break;

            case 9:
                printf("Enter angle in degrees: ");
                scanf("%lf", &a);

                if (fabs(cos(a * PI / 180.0)) < 1e-12) {
                    printf("Error: Tangent is undefined at this angle.\n");
                } else {
                    printf("Result = %g\n", tan(a * PI / 180.0));
                }
                break;

            case 0:
                printf("Calculator closed.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 0);

    return 0;
}

