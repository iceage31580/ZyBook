#include <iostream>
using namespace std;

int main() {
   int hourlyWage;
   int workHoursPerWeek;
   int workWeeksPerYear;
   const int MONTHS_PER_YEAR = 12;     // FIXME: Declare as const and use standard naming
   int annualSalary;
   int monthlySalary;

   cout << "Enter hourly wage: " << endl;
   cin >> hourlyWage;

   // FIXME: Get user input values for workHoursPerWeek and workWeeksPerYear
   workHoursPerWeek = 0;
   workWeeksPerYear = 0;
   
   cout << "How many hours do you usually work per week? " << endl; 
   cin >> workHoursPerWeek; 
   
   cout << "How many weeks per year do you work? " << endl; 
   cin >> workWeeksPerYear; 

   annualSalary = hourlyWage * workHoursPerWeek * workWeeksPerYear;
   cout << "Annual Salary is: ";
   cout << annualSalary << endl;
   
   // TODO: Calculate monthlySalary using annualSalary and the modified monthsPerYear const variable
   monthlySalary = annualSalary/MONTHS_PER_YEAR; 
   cout << "Monthly salary is: ";
   cout << monthlySalary << endl;

   return 0;
}
