#include <stdio.h>
int main(){
int integer1, integer2, sum, product, quotient, difference;
printf("Enter a first integer: ");
scanf("%d", &integer1);
printf("Enter a second integer: ");
scanf("%d", &integer2);
sum = integer1 + integer2;
printf("sum: %d\n", sum);
product = integer1 * integer2;
printf("product: %d\n", product);
quotient = integer1 / integer2;
printf("quotient: %d\n", quotient);
difference = integer1 - integer2;
printf("difference: %d\n", difference);
return 0; }
