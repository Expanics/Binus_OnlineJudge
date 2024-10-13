#include <stdio.h>

int main()
{
	int b, c, d;
	
	scanf("%d", &b);
	
	for (int z = 0; z < b; z++){
	  scanf("%d %d", &c, &d);
	  printf("Case #%d:\n", z + 1);
	  for (int y = 0; y < c; y++) {
	    for (int x = 0; x < d; x++) {
	      if (x == 0 || x == d - 1 || y == 0 || y == c - 1) {
	        printf("#");
	      } else {
	        printf(" ");
	      }
	    }
	    printf("\n");
	  }
	}
	
	return 0;
}

