#include <stdio.h>
int main() {
    int CP;
    printf("Enter costprice of item :");
    scanf("%d",&CP);
    int SP;
    printf("Enter sellinngprice of item :");
    scanf("%d",&SP);
    if(CP<SP)
      printf("profit is %d",SP-CP);
    if(CP>SP)
      printf("loss is %d",CP-SP);
    return 0;
}