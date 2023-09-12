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

        int result;
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
                    continue;
                }
                break;
            case '%':
                if (num2 != 0) {
                    result = num1 % num2;
                } else {
                    printf("Invalid calculation!\n");
                    continue;
                }
                break;
            case '&':
                result = num1 & num2;
                break;
            default:
                printf("Invalid calculation! \"%d %c %d\"\n", num1, operation, num2);
                continue;
        }

        printf("> %d %c %d = %d\n", num1, operation, num2, result);
    }

    return 0;
}