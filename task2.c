// This program calculates the gross salary based on basic salary and allowances
// HRA (House Rent Allowance), DA (Dearness Allowance), and TA (Travel Allowance).

#include <stdio.h>

int main() {
    int salary, HRA, DA, TA, gross_salary;
    float HRA_percentage, DA_percentage, TA_percentage;

    printf("Enter basic salary: ");
    scanf("%d", &salary);   

    printf("Enter HRA percentage: ");
    scanf("%f", &HRA_percentage);

    printf("Enter DA percentage: ");
    scanf("%f", &DA_percentage);

    printf("Enter TA percentage: ");
    scanf("%f", &TA_percentage);


    HRA = salary * HRA_percentage / 100;  // Calculate HRA based on percentage           
    DA = salary * DA_percentage / 100;  // Assuming DA is 8% of salary
    TA = salary * TA_percentage / 100;  // Assuming TA is 5% of salary
    gross_salary = salary + HRA + DA + TA;


    // Output the calculated values
    printf("Calculated allowances:\n");
    printf("Gross salary: %d\n", gross_salary);
    printf("HRA: %d\n", HRA);       
    printf("DA: %d\n", DA);
    printf("TA: %d\n", TA);
    printf("Basic salary: %d\n", salary);
    printf("Total salary: %d\n", gross_salary);
return 0;
}