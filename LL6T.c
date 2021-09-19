#include <stdio.h>
int main()
{
  int t;
  float p, i, interest, amount;
  scanf("%f %f %d", &p, &i, &t);
  interest = (p * i * t) / 100;
  amount = p + interest;
  printf(" Interest after %d Years = $%0.2f\n", t, interest);
  printf("Total Amount after %d Years = $%0.2f", t, amount);
  return 0;
}
"
