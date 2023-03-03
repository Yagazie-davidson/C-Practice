#include <stdio.h>
#include <math.h>

 // function main begins program execution
int main( void )
{
  int account_number; 
  int mortgage_amount;
  int mortgage_term;
  int mortgage_term_months;
  double interest_rate;
  double total_amount_payable;
  double total_interest_payable;
  double required_monthly_payment;
  double monthly_payment_round_off;
  int run = 1;

  while (run = 1){
    printf("Enter account number (-1 to end): ");
    scanf("%d", &account_number);

    printf("Enter mortgage amount (in dollars): ");
    scanf("%d", &mortgage_amount);

    printf("Enter mortgage term (in years): ");
    scanf("%d", &mortgage_term);

    printf("Enter interest rate (as a decimal): ");
    scanf("%lf", &interest_rate);

    mortgage_term_months = mortgage_term * 12;

    total_interest_payable = mortgage_amount*interest_rate*mortgage_term;

    total_amount_payable = mortgage_amount+total_interest_payable;

    required_monthly_payment = total_amount_payable / mortgage_term_months;

    monthly_payment_round_off = round(required_monthly_payment);

    printf("The monthly payable interest $ %lf \n", monthly_payment_round_off);

  }
  return 0;
  
 }