#include<stdio.h>
int main()
{
  float basicPay, houseRent, medicalAllowance, computerAllowance, totalPay;

  printf("Please enter Basic pay? ");
  scanf("%f", &basicPay);

  houseRent = 0.4 * basicPay;
  medicalAllowance = 0.18 * basicPay;
  computerAllowance = 0.15 * basicPay;
  totalPay = basicPay + houseRent + medicalAllowance + computerAllowance;

  printf("\nPAY SLIP\n");
  printf("Basic pay : %.2f\n", basicPay);
  printf("House Rent (40%%) : %.2f\n", houseRent);
  printf("Medical All ounce (18%%) : %.2f\n", medicalAllowance);
  printf("Computer Allounce(15%%) : %.2f\n", computerAllowance);
  printf("-----------------------------------------------------------------------------\n");
  printf("Total pay : %.2f\n", totalPay);

  return 0;
}