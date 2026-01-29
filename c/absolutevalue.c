#include <stdio.h>
int main(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x<0)
    //  Makeing it positive
       x=x*(-1);
       printf("Absolute value is %d",x);
    return 0;
}