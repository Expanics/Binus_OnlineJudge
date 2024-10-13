#include <stdio.h>

int main()
{
  char number[100];
	int b, c;
	
	scanf("%d", &b);
	
	for (int x = 0; x < b; x++){
	  int bibi = 0, lili = 0;
	  scanf("%d", &c);
	  scanf("%s", number);
	  for (int y = 0; y < c; y++) {
	    if(number[y] == 'L') {
	      lili++;
	    } else if (number[y] == 'B') {
	      bibi++;
	    }
	  }
	
	  if (bibi > lili) {
	    printf("Bibi\n");
	  } else if (lili > bibi) {
	    printf("Lili\n");
	  } else {
	    printf("None\n");
	  }
	}
	
	return 0;
}

