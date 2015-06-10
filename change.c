#include <stdio.h>

void ComputeChange(int totCents, int* numQuarters, int* numDimes, int* numNickels, int* numPennies)
{
  
   *numQuarters = totCents / 25;
   *numDimes = (totCents % 25) / 10;
   *numNickels = ((totCents % 25) % 10) / 5;
   *numPennies = ((totCents % 25) % 10) % 5;
   
   return;
}

int main(void)
{
   int userCents = 0;
   int numQuarters = 0;
   int numDimes = 0;
   int numNickels = 0;
   int numPennies = 0;
   
   printf("Enter total cents: \n");
   scanf("%d", &userCents);
   
   ComputeChange(userCents, &numQuarters, &numDimes, &numNickels, &numPennies);
   
   printf("Quarters: %d\n", numQuarters);
   printf("Dimes: %d\n", numDimes);
   printf("Nickels: %d\n", numNickels);
   printf("Pennies: %d\n", numPennies);
   
   return 0;
}
