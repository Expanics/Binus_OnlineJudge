#include <stdio.h>

int main()
{
	int a, b, c;

	scanf("%d", &a);
	
	for (int x = 0; x < a; x++){
	  scanf("%d %d", &b, &c);
	  b >>= c;
	  b &= 1;
	  printf("%u\n", b);
	}
	
	return 0;
}

