
#include <stdio.h>

int main() {
    char op;
    double num1, num2;

    printf("ऑपरेटर निवडा (+, -, *, /): ");
    scanf(" %c", &op);

    printf("दोन संख्या प्रविष्ट करा: ");
    scanf("%lf %lf", &num1, &num2);

    switch (op) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            else
                printf("त्रुटी: शून्याने भागता येत नाही!\n");
            break;
        default:
            printf("अवैध ऑपरेटर!\n");
    }

    return 0;
}
