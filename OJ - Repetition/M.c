#include <stdio.h>

int main()
{
	int a, b, c, d;

	scanf("%d", &a);
	
	for (int x = 0; x < a; x++){
	  scanf("%d %d", &b, &c);
	  
		int hasil = 0;
		for (int y = 0; y < b; y++) {
	    	scanf("%d", &d);
	    	hasil += d;
	  }
	  
	  if(c >= hasil) {
	    printf("Case #%d: No worries\n", x + 1);
	  } else {
	    printf("Case #%d: Wash dishes\n", x + 1);
	  }
	}
	
	return 0;
}

