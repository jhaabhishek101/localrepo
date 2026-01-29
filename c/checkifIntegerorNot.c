#include <stdio.h>
int main() {
    float f; // f=3.14
    printf("Enter a real number:");
    scanf("%f",&f);
    int x=(int)f; //x=3
    float a=(float)x; //a=3
    if(f-a==0)
      printf("Number is integer");
    if(f-a>0)
      printf("Number is not a integer");
    return 0;
}