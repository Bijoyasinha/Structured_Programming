#include<stdio.h>
int main(){
    char operation;
    double n1, n2;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operation);
    printf("Enter two operands: ");
    scanf("%lf %lf", &n1, &n2);
    switch(operation)
    {
     case '+':
     printf("%.lf + %.lf = %.1lf", n1, n2, n1+n2);
     break;
     case '-':
     printf("%.lf - %.lf = %.1lf", n1, n2, n1-n2);
     break;
     case '*':
     printf("%.lf * %.lf = %.lf", n1, n2, n1*n2);
     break;
     printf("%.lf / %.lf = %.1lf", n1, n2, n1/n2);
     break;
     default:
     ("Error!operator is not correct");
     
    }
    return 0;
}


