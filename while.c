#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 40;
    char op;

    while (1) {   
        printf("Choose operator '+': ");
        scanf(" %c", &op);  

        switch (op) {
            case '+':
                printf("Addition of num1 and num2 is: %d\n", num1 + num2);
                return 0; 

            default:
                printf("Invalid, try again.\n");
        }
    }

    return 0;
}
