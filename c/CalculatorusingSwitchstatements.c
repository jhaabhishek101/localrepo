#include <stdio.h>
int main() {
    char ch ;// "+,-,*,/"
    printf("Enter the operator:");
    scanf("%c",&ch);
    int a;
    printf("Enter 1st number:");
    scanf("%d",&a);
    int b;
    printf("Enter 2nd number:");
    scanf("%d",&b);
    //Switch Statements
     switch(ch){
       case'+':
       printf("%d\n",a+b);
       break;
       case'-':
       printf("%d\n",a-b);
       break;
       case'*':
       printf("%d\n",a*b);
       break;
       case'/':
       printf("%d\n",a/b);
       break;
       default:
        printf("Invalid Operator");
     }
 return 0;
}