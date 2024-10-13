#include <stdio.h>

int main()
{
	int b, c;
	int i = 0;
	
	scanf("%d", &b);
	
	for (int x = 0; x < b; x++){
	  scanf("%d\n", &c);
	  char ip[101], ip2[101];
	  if(x == b-1) {
	    scanf("%[^\n]", ip);
	  } else {
	    scanf("%[^\n]\n", ip);
	  }
	  
	  int j = 0;
	  for(int y = 0; y < c; y++) {
      if(ip[y] >= 'a' && ip[y] <= 'z') ip2[j++] = ip[y];
      if(y == c - 1) ip2[j] = '\0';
	  }
	  
	  printf("Case #%d: %s\n", x+1, ip2);
	}
	
	return 0;
}

