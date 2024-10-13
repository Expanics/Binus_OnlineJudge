#include <stdio.h>

int main()
{
	int a, b;
	
	scanf("%d %d", &a, &b);
  for (int y = 0; y < a; y++){
    for (int x = 0; x < a; x++) {
      printf("#");
    }
    printf("\n");
  }
  
  printf("\n");
  for (int y = 0; y < a; y++){
    for (int x = 0; x < a; x++) {
      if (y % b == b - 1) {
        printf("#");
      } else {
        printf(".");
      }
    }
    printf("\n");
  }
  
  printf("\n");
  for (int y = 0; y < a; y++){
    for (int x = 0; x < a; x++) {
      if (x % b == b - 1) {
        printf("#");
      } else {
        printf(".");
      }
    }
    printf("\n");
  }
	
	return 0;
}

