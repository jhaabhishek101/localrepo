#include <stdio.h>
int main() {
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    // divisble by 3 or 5 but not 15
    if(x%15!=0){
        if(x%3!=0){
          if(x%5==0)printf("Condition Valid");
          else printf("Condition Invalid");  
        }
        else // x%3=0
        printf("Condition Valid");
    }
    else // x%15=0
      printf("Condition Invalid");
    return 0;
}