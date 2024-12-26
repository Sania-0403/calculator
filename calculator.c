#include <stdio.h>
int main()
{
    char operator;
    int num1,num2,result;
    printf("enter an operator(+,-,*,/)");
    scanf("%c",&operator);
    printf("enter first number:");
    scanf("%d",&num1);
    printf("enter second number:");
    
    scanf("%d",&num2);
    switch(operator){
      case '+':
      result = num1 + num2;
      printf("%d + %d = %d\n", num1, num2, result);
      break;
      case '-':
      result = num1 - num2;
      printf("%d - %d = %d\n", num1, num2, result);
      break;
      case '*':
      result = num1 * num2;
      printf("%d * %d = %d\n", num1, num2, result);
      break;
      case '/':
      
      if (num2 != 0) {
          result = num1 / num2;
          printf("%d / %d = %d\n", num1, num2, result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
            default:
            printf("Error! Operator is not correct.\n");
            break;
    }
    return 0;
}