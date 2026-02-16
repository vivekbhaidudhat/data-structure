#include <stdio.h>
int main() {
char op;
float a, b;
printf("Enter operator (+, -, *, /): ");
scanf(" %c", &op);
printf("Enter two numbers: ");
scanf("%f %f", &a, &b);
switch(op) {
case '+': printf("Sum = %.2f\n", a+b); break;
case '-': printf("Difference = %.2f\n", a-b); break;
case '*': printf("Product = %.2f\n", a*b); break;
case '/':
if(b!=0) printf("Division = %.2f\n", a/b);
else printf("Cannot divide by zero\n");
break;
default: printf("Invalid operator\n");
}
return 0;
}