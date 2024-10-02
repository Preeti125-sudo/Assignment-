#include <stdio.h>
#include <math.h>
int main () {
  float principal;
  printf("Enter the principal amount:");
  scanf("%lf" ,&principal);
  float rate;
  printf("Enter the rate:");
  scanf("%lf",&rate);
  float time;
  printf("Enter the time:");
  scanf("%lf",&time);
  float rate_per_year;
  printf("Enter the rate_per_year:");
  scanf("%lf",&rate_per_year);
  double amount;
  amount =principal* (pow((1+rate/rate_per_year),rate_per_year*time));
  double compound_interest;
  compound_interest = amount-principal;
  return 0;
}

  
