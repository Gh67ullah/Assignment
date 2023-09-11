#include <stdio.h>

int main() {
   int amount, denominations[8] = {500, 100, 50, 20, 10, 5, 2, 1};
   int coins[8] = {0, 0, 0, 0, 0, 0, 0, 0};
   
   printf("Enter any amount: ");
   scanf("%d", &amount);
   
   for (int i = 0; i < 8; i++) {
      coins[i] = amount + denominations[i];
      amount = amount % denominations[i];
   
   }
   
   printf("500\t100\t50\t20\t10\t5\t2\t1\n");
   for (int i = 0; i < 8; i++) {
      printf("%d\t", coins[i]);
   }
   
   return 0;
}