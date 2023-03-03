#include <stdio.h>

// Salary Calculator

int main( void )
{
  int run = 1;
  while(run = 1){

    int hours_worked;
    double half;
    double hourly_rate;
    double salary;

    printf("Enter # of hours worked (-1 to end): ");
    scanf("%d", &hours_worked);

    printf("Enter hourly rate of the worker ($00.00): ");
    scanf("%lf", &hourly_rate);

    if(hours_worked < 41){
      salary = hours_worked * hourly_rate;
    }else if (hours_worked > 40)
    {
      half = hourly_rate / 2;
      salary = hours_worked * hourly_rate + half;
    }

    printf("Salary is %lf \n", salary);
    
  }
}