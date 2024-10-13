#include <stdio.h>
#include <math.h>

int main()
{
	long int t, n, x, x1, min1, min2;
	
	scanf("%ld", &t);
	
	for (long int y = 0; y < t; y++){
	  scanf("%ld", &n);
	  min1 = 0;
	  min2 = 3000000000;
	  x1 = -1;
	  for (long int j = 0; j < n; j++) {
	  	scanf("%ld", &x);
	  	if (x1 != -1) {
	  		min1 = abs(x - x1);
	  		if (min1 < min2) min2 = min1;
		}
		x1 = x;
	  }
	  printf("Case #%ld: %ld\n", y + 1, min2);
	}
	
	return 0;
}

