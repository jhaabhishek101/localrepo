#include <stdio.h>
int main() {
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    // || stands for logical OR
    if (x%3==0 || x%5==0)
       printf("Divisible by 3 or 5");
    else
       printf("Not divisible by 3 or 5 ");
    return 0;
}