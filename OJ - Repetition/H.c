#include <stdio.h>

int main()
{
	int c;
	
	scanf("%d", &c);
  for (int y = 0; y < c; y++){
    for (int x= 0; x < c; x++) {
      printf("*");
    }
    printf("\n");
  }
	
	return 0;
}

