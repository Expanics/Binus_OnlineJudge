#include <stdio.h>

int main()
{
	int b, n, m, k, l;
	
	scanf("%d", &b);
	
	for (int x = 0; x < b; x++){
	  scanf("%d %d %d\n", &n, &m, &k);
	  
	  int maxPiring = k;
	  for(int y = 0; y < n; y++) {
	    scanf("%d", &l);
	    if (l > k && l <= m) {
	      if(l > maxPiring) {
	        maxPiring = l;
	      }
	    }
	  }
	  
	  
	  printf("Case #%d: %d\n", x+1, maxPiring);
	}
	
	return 0;
}

