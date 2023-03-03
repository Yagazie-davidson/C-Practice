#include <stdio.h>
#include <math.h>

int main( void )
{
  int run = 1;
  while(run = 1) {
    double principal;
    double rate;
    int term;
    double term_years;
    double interest;

    printf("Enter loan principal (-1 to end): ");
    scanf("%lf", &principal);

    printf("Enter interest rate: ");
    scanf("%lf", &rate);

    printf("Enter term of the loan in days: ");
    scanf("%d", &term);


    term_years = term / 365;

    interest = principal * rate * term_years;

    printf("The interest charge is $ %lf \n", interest);
  };
  return 0;
}