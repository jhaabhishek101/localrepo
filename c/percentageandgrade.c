#include <stdio.h>

int main() {
    int x; // percentage
    printf("Enter Percentage:");
    scanf("%d", &x);
  //Else if statement
  if (x>=81)
  printf("Very Good");
  else if(x>=61)
  printf("Good");
  else if(x>=41)
  printf("Average");
  else printf("Fail");
  return 0;
}

  