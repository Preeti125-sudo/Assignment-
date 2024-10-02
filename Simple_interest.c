#include <stdio.h>
int main(){
  float principal,rate,time, simple_interest;
  printf("Enter principal:");
  scanf("%f",&principal);
  printf("Enter rate :");
  scanf("%f",&rate);
  printf("Enter time :");
  scanf("%f",&time);
  simple_interest=principal*rate/100*time;
  printf("simple_ interest=%.2f\n",simple_interest);
  return 0;
}
