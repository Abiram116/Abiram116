#include <stdio.h>

int main(){
  int n;
  printf("Enter any number : ");
  scanf("%d", &n);
  printf("\n\n___________________\n\n");
  printf("MERRY CHRISTMAS !!!\n-------------------\n\n\n");
  for (int i = 1; i <= n; i++){
    // spaces
    for (int j = 1 ;j < n-i+1; j++){
      printf(" ");
    }
    // stars
    for (int k = 1; k <= i; k++){
      printf("* ");
    }
    printf("\n");
  }
  // trunk of tree
  for (int i = 1; i < n-1; i++){
    // spaces
    for (int j = 1; j < n-1; j++){
      printf(" ");
    }
    // legs
    for (int k = 1; k <= 2; k++){
      printf("| ");
    }
    printf("\n");
  }
  printf("\n\n-----------------------------------------\n");
  return 0;
}