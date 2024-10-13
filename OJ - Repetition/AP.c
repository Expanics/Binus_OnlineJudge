#include <stdio.h>

int main()
{
	int b, c, d;
	
	scanf("%d", &b);
	
	for (int x = 0; x < b; x++){
	  scanf("%d %d\n", &c, &d);
	  char kata[101], kata2[101] = {0};
    scanf("%s", kata);
	  
	  int j = 0;
	  for(int y = 0; y < c; y++) {
	    int panjangKata = kata[y] + d - 97;
	    panjangKata %= 26;
	    kata2[y] = panjangKata + 97;
	    if (y == c - 1) kata[++y] = '\0';
	  }
	  
	  
	  printf("Case #%d: %s\n", x+1, kata2);
	}
	
	return 0;
}

