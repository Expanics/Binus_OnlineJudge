#include <stdio.h>

int main()
{
	int a, b, c, d;
	int oke = 0;

	scanf("%d", &a);
	
	for (int x = 0; x < a; x++){
	  scanf("%d %d %d", &b, &c, &d);
	  if (c > b && c > d) {
      oke++;
	  }
	}
	
	printf("%d\n", oke);
	
	return 0;
}

