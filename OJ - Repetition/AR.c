#include <stdio.h>

int main()
{
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	for (int z = 0; z < a; z++) {
  	for (int y = 0; y < b; y++) {
  	  for (int a = b; a > y + 1; a--) {
  	    printf(" ");
  	  }
      for (int x = 0; x <= y; x++){
        printf("*");
      }
      printf("\n");
  	}
	}
	
	return 0;
}

