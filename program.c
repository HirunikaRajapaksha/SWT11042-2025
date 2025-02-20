#include <stdio.h>
int main(){

 float PayRate;
 int hours;
 printf("Enter total worked hours:");
 scanf("%d",&hours);
 printf("Enter PayRate:");
 scanf("%f", &PayRate);
 printf("your PayRate: %.2f, Worked Hours: %d\n", PayRate, hours);
 return 0;
 }
