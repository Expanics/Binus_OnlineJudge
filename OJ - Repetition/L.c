#include <stdio.h>

int main()
{
	int a, b, c;

	scanf("%d", &a);
	
	for (int x = 0; x < a; x++){
	  scanf("%d %d", &b, &c);
	  
		int botolMinum = b;
	  	int botolKosong = b;
		while (botolKosong >= c) {
	    	int botolBaru = botolKosong / c;
	    	botolMinum += botolBaru;
      		botolKosong = botolKosong % c + botolBaru;
	  }
	  printf("Case #%d: %d\n", x + 1, botolMinum);
	}
	
	return 0;
}

