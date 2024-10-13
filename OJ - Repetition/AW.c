#include <stdio.h>

int main()
{
	int a, b;

	scanf("%d", &a);
	
	for(int l = 0; l < a; l++) {
	  scanf("%d", &b);
	  
	  int hasil = 0;
	  int nilaiMax = 0;
	  int nilai[b+1];
	  for (int y = 0; y < b; y++) {
	    scanf("%d", &nilai[y]);
	  }
	  
	  for (int y = 0; y < b; y++) {
	    if (nilai[y] > nilaiMax) {
	      nilaiMax = nilai[y];
	    }
	  }
	  
	  for (int y = 0; y < b; y++) {
	    if (nilai[y] == nilaiMax) {
	      hasil++;
	    }
	  }
	  
  	printf("Case #%d: %d\n", l + 1, hasil);
	}
	
	
	return 0;
}

