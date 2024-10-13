#include <stdio.h>

int main()
{
	int a, b, c, d;

	scanf("%d", &a);
	
	for (int x = 0; x < a; x++){
	  scanf("%d", &b);
	  
	  int angka[b + 1];
		int hasil = 0;
		int pos = 0;
		int hasil2 = 0;
		
		for (int y = 0; y < b; y++) {
		  scanf("%d", &angka[y]);
		  hasil += angka[y];
	  }
	  
	  for (int y = 0; y < b; y++) {
	    hasil2 += angka[y];
	    int hasil3 = hasil - hasil2;
	    
	    if(hasil3 == hasil2) {
	      pos = 1;
	      break;
	    }
	  }
	  
	  if(pos) {
	    printf("Case #%d: Yes\n", x + 1);
	  } else {
	    printf("Case #%d: No\n", x + 1);
	  }
	}
	
	return 0;
}
