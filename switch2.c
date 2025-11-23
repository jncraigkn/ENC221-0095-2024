#include <stdio.h>
int main()
{
 int num1 = 10;
 int num2 = 40;
char op;
    printf("choose operator '+'\n");
    scanf("%c",&op);
 switch(op)
    {

        case '+':
            printf("Addition of num1 and num2 is: %d\n", num1 + num2);
            break;

            default:
            printf("invalid operator\n");
            break;
    }
        
return 0;
}