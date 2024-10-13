#include <stdio.h>

int main()
{
	int a, b, c = 0;

	scanf("%d", &a);
	
	for (int x = 0; x < a; x++){
	  scanf("%d", &b);
	  c += b;
	}
	
	printf("%d\n", c);
	
	return 0;
}

