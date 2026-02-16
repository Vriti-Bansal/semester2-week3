
#include <stdio.h>

/*
 * Potrfolio submission
 * Name:Vriti Bansal
 * ID:201914016
 */
int main( void ) {

    // define and initialise variables for the problem data 
    double salary=36250; //original salary
    double NI_rate=8.0;// national insuramce percenatge
    double tax_rate=15.0;// tax percenatge


    // calculate the deductions and final take-home salary
    double NI_contrubution= salary*(NI_rate/100.0);// NI taken from the full salary
    double new_salary= salary - NI_contrubution;//salary after the reduction
    double tax = 0.0;// only the amount above 12500 gets taxed
    if (new_salary>12500.0){
      tax = new_salary -12500.0;
    }
    double tax_contribution = tax*(tax_rate/100.0);
    double final_salary = new_salary-tax_contribution;//subtracting tax from the salary after NI
    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f\n",salary);
    printf("NI contribution £%.2f\n",NI_contrubution);
    printf("Tax contribution £%.2f\n",tax_contribution);
    printf("Take home salary £%.2f\n",final_salary);

    return 0;
 }
 