//Design a basic calculator in C. It must be a menu driven program
//Press 1 for addition
//Press 2 for substraction
//Press 3 for multiplication
//Press 4 for division

//after showing result the main menu should appear again.

int main()
{
  int choice;
    float num1, num2, result;

    do {
        printf("Main Menu\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter first number: ");
                scanf("%f", &num1);
                printf("Enter second number: ");
                scanf("%f", &num2);
                result = num1 + num2;
                printf("Result: %.2f\n", result);
                break;
            case 2:
                printf("Enter first number: ");
                scanf("%f", &num1);
                printf("Enter second number: ");
                scanf("%f", &num2);
                result = num1 - num2;
                printf("Result: %.2f\n", result);
                break;
            case 3:
                printf("Enter first number: ");
                scanf("%f", &num1);
                printf("Enter second number: ");
                scanf("%f", &num2);
                result = num1 * num2;
                printf("Result: %.2f\n", result);
                break;
            case 4:
                printf("Enter first number: ");
                scanf("%f", &num1);
                printf("Enter second number: ");
                scanf("%f", &num2);
                if (num2 == 0) {
                    printf("Error: Division by zero\n");
                } else {
                    result = num1 / num2;
                    printf("Result: %.2f\n", result);
                }
                break;
            case 5:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice\n");
                break;
        }

    } while (choice != 5);
  return 0;
}
