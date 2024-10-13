#include <stdio.h>

int main()
{
	int c, b;
	
	scanf("%d", &b);
	
	for (int j = 0; j < b; j++) {
	  scanf("%d", &c);
	  printf("Case #%d: ", j+1);
	  for (int x = 1; x <= c; x++) {
	    printf("%c", 96 + x);
	  }
	  printf("\n");
	}
	
	return 0;
}

