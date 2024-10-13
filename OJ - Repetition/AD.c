#include <stdio.h>

int main() {
  int a;
  
  scanf("%d", &a);
  
  int angka[a + 1];
  
  int max = 1;
  
  for (int y = 0; y < a; y++) {
    scanf("%d", &angka[y]);
  }
  
  for (int y = 0; y < a; y++) {
    int hitungMax = 1;
    for (int x = 0; x < a; x++) {
      if (angka[y] == angka[x] && y != x) hitungMax++;
    }
    if(hitungMax > max) max = hitungMax;
  }
  
  printf("%d\n", max);

  return 0;
}
