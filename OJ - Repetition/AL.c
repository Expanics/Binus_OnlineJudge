#include <stdio.h>

int main()
{
	int a, b;

	
	int maxHealth = 0, maxDamage = 0;
	scanf("%d %d", &a, &b);
	
	int damage, health;
	
	for (int x = 0; x < a; x++){
	  scanf("%d", &damage);
	  if(damage > maxDamage) maxDamage = damage;
	}
	
	for (int z = 0; z < b; z++){
	  scanf("%d", &health);
	  if (health > maxHealth) maxHealth = health;
	}
	
	if (maxDamage > maxHealth) {
	  printf("The dark secret was true\n");
	} else {
	  printf("Secret debunked\n");
	}
	
	return 0;
}

