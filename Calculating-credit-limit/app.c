#include <stdio.h>

// Calculating credit limit

int main( void )
{
  int account_number1;
  int account_number2;
  int account_number3;
  double credit_limit_pre_reccession1;
  double credit_limit_pre_reccession2;
  double credit_limit_pre_reccession3;
  double current_balance1;
  double current_balance2;
  double current_balance3;

  printf("Enter account number for first user: ");
  scanf("%d", &account_number1);

  printf("Enter credit limit: ");
  scanf("%lf", &credit_limit_pre_reccession1);

  printf("Enter Current balance: ");
  scanf("%lf", &current_balance1);

  // Input second account
  printf("Enter account number for second user: ");
  scanf("%d", &account_number2);

  printf("Enter credit limit: ");
  scanf("%lf", &credit_limit_pre_reccession2);

  printf("Enter Current balance: ");
  scanf("%lf", &current_balance2);


  // Input third account
  printf("Enter account number for third user: ");
  scanf("%d", &account_number3);

  printf("Enter credit limit: ");
  scanf("%lf", &credit_limit_pre_reccession3);

  printf("Enter Current balance: ");
  scanf("%lf", &current_balance3);


  check_limit(account_number1, credit_limit_pre_reccession1, current_balance1);
  check_limit(account_number2, credit_limit_pre_reccession2, current_balance2);
  check_limit(account_number3, credit_limit_pre_reccession3, current_balance3);
}
  int check_limit(int account_number, double credit_limit_pre_reccession, double current_balance)
  {
    double credit_limit_post_recession;
    credit_limit_post_recession = credit_limit_pre_reccession / 2;
      if(current_balance > credit_limit_post_recession){
        printf("%d is maxed out \n", account_number);
      } else{
        printf("%d is valid \n", account_number);
      };
  };
