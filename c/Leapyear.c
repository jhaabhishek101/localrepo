#include <stdio.h>
int main() {
    int x;
    printf("Enter the year:");
    scanf("%d",&x);
    
    if (x%400==0 ||(x%4==0 && x%100!=0))
       printf("It is a Leap Year");
    else
       printf("It is a not a leap year ");
    return 0;
}