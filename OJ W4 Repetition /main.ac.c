#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T); 
    
    for (int t = 1; t <= T; t++) {
        int N, M; 
        scanf("%d %d", &N, &M);

        int prices[10000]; 
        
        for (int i = 0; i < N; i++) {
            scanf("%d", &prices[i]);
        }

        for (int i = 0; i < N - 1; i++) {
            for (int j = 0; j < N - i - 1; j++) {
                if (prices[j] > prices[j + 1]) {
                    int temp = prices[j];
                    prices[j] = prices[j + 1];
                    prices[j + 1] = temp;
                }
            }
        }

        int totalCandies = 0;
        int totalCost = 0;

        for (int i = 0; i < N; i++) {
            if (totalCost + prices[i] <= M) {
                totalCandies++;
                totalCost += prices[i];
            } else {
                break; 
            }
        }

        printf("Case #%d: %d\n", t, totalCandies);
    }

    return 0;
}
