#include <stdio.h>
int main() {
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    // typecasting
    float f=(float)x;
    printf("%f",f/2);
    return 0;
}