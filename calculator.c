#include <stdio.h>

int main() {
    char operation;
    int num1, num2;
    int result;
    
   while (1) {
        printf("Enter your calculation:\n");

        if (scanf("%d %c %d", &num1, &operation, &num2) != 3) {
            printf("Invalid calculation! \"%d %c %d\"\n", num1, operation, num2);
            break;
        }
        printf(num1, " ", operation, " ", num2)

        switch (operation) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    printf("Invalid calculation!\n");
                    break;
                }
                break;
            case '%':
                if (num2 != 0) {
                    result = num1 % num2;
                } else {
                    printf("Invalid calculation!\n");
                    break;
                }
                break;
            case '&':
                result = num1 & num2;
                break;
            default:
                printf("Invalid calculation! \"%d %c %d\"\n", num1, operation, num2);
                break;
        }

        printf("> %d %c %d = %d\n", num1, operation, num2, result);
    }

    return 0;
}