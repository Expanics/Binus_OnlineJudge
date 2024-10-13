#include <stdio.h>

int main()
{
	int b, c, d;
	
	scanf("%d", &b);
	
	for (int z = 0; z < b; z++){
	  scanf("%d", &c);
	  for (int y = 0; y < c; y++) {
	    for (int x = 0; x < c; x++) {
	      if (x == 0 || x == c - 1 || x == y || x == c - y - 1 || y == 0 || y == c - 1) {
	        printf("*");
	      } else {
	        printf(" ");
	      }
	    }
	    
	    printf("\n");
	  }
	  printf("\n");
	}
	
	return 0;
}

