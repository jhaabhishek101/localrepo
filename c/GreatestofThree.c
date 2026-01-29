#include <stdio.h>
int main() {
    int a;
     printf("Enter first number:");
     scanf("%d",&a);
    int b;
     printf("Enter second number:");
     scanf("%d",&b);
    int c;
     printf("Enter third number:");
     scanf("%d",&c);

    if(a > b && a > c)
     printf("%d is Greatest!",a);
    if(b > a && b > c)
     printf("%d is Greatest!",b);
    if (c > b && c > a)
     printf("%d is Greatest!",c); 
return 0;
}
    