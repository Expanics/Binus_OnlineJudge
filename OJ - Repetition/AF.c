#include <stdio.h>

int main()
{
	int b, c;
	
	scanf("%d", &b);
	
	for (int x = 0; x < b; x++){
	  scanf("%d\n", &c);
	  int number[101];
	  
	  int valid = 0, invalid = 0;
	  for(int y = 0; y < c; y++) {
      scanf("%d", &number[y]);
	  }
	  
	  for (int i = 0; i < c; i++) {
      for (int j = i + 1; j < c; j++) {
  	    int result = number[i] ^ number[j];
  	    int countBit = 0;
  	    while (result) {
  	      countBit += result & 1;
  	      result >>= 1;
  	    }
  	    if(countBit >= 3) {
  	      valid++;
  	    } else {
  	      invalid++;
  	    }
  	  }
	   }
	  
	  printf("Case #%d: %d %d\n", x+1, valid, invalid);
	}
	
	return 0;
}

