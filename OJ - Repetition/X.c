#include <stdio.h>

int main()
{
	int b, c = 0;
	
	scanf("%d", &b);
	
	int n = 1;
	for (int x = 0; x < b; x++){
	  c += n * 2;
	  n *= 2;
	}
	
	c += 1;
	
	printf("%d\n", c);
	
	return 0;
}

