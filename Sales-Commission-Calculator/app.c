#include <stdio.h>

// Program that will input each salesperson’s gross sales for last week and will calculate and display that salesperson’s earning

int main( void )
{
  int sales;
  double salary;
  double percent_sale;
  int run = 1;
  while (run = 1){
    printf("Enter sales in dollars (-1 to end): ");
    scanf("%d", &sales);
    percent_sale = sales * 9 / 100;
    salary = percent_sale + 200;
    printf("Salary is: $ %lf \n", salary);
  };
  return 0;
}
