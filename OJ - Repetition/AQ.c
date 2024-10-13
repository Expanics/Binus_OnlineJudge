#include <stdio.h>

int main()
{
	int a, b, c, d;
	char ip[101];

	scanf("%d", &a);
	
	for (int x = 0; x < a; x++){
	  scanf("%s", ip);
	  
		int totalTitik = 0;
		int totalAngka = 0;
		int totalBenar = 0;
		for (int y = 0; y < 101; y++) {
      if(ip[y] >= '0' && ip[y] <= '9') {
	    	  totalAngka++;
	    	} else if (ip[y] == '.') {
	    	    totalTitik++;
	    	  if(totalAngka > 0) {
	    	    totalAngka = 0;
	    	    totalBenar++;
	    	  }
	    	} else {
	    	  break;
	    	}
	  }
	  
	  if(totalTitik == 5 && totalBenar >= 5) {
	    printf("Case #%d: YES\n", x + 1);
	  } else {
	    printf("Case #%d: NO\n", x + 1);
	  }
	}
	
	return 0;
}

