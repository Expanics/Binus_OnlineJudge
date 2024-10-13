#include <stdio.h>

int main()
{
	int a, b, c;

	scanf("%d", &a);
	
	for (int x = 0; x < a; x++){
	  scanf("%d", &b);
	  int odd = 0, even = 0;
	  for (int y = 0; y < b; y++) {
	    scanf("%d", &c);
	    if (c % 2) {
  	    odd++;
  	  } else {
  	    even++;
  	  }
	  }
	  
	  printf("Odd group : %d integer(s).\n", odd);
	  printf("Even group : %d integer(s).\n\n", even);
	}
	
	return 0;
}

