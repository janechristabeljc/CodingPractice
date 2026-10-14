#include<stdio.h>
int main(){
int a, b, sum, diff, prod;
float quo;

printf("Enter value of a: ");
scanf("%d", &a);
printf("Enter value of b: ");
scanf("%d", &b);

sum = a+b;
diff = a-b;
prod = a*b;
quo = a/b;

printf("Sum of %d and %d is %d", a, b , sum);
printf("Difference of %d and %d is %d", a, b , diff);
printf("Product of %d and %d is %d", a, b , prod);
printf("Quotient of %d and %d is %d", a, b , quo);

}