#include <iostream>
#include "file.h"
using namespace std;
float Professional::weeklySalary() { //Overriding the abstract method
    weekly_salary = monthlysalary / 4;  //calculating weekly salary using monthly_sal/4 (1 month=4 weeks)
    return weekly_salary;
}
float  Professional::weeklyVacation() { //Overriding the abstract method
    weekly_vacation = monthlyvacation / 4; //calculating weekly vacation using weekly_vac/4 (1 month=4 weeks)
    return weekly_vacation;
}
float Professional::weeklyHealthcareContributions(float calc_sal) {  //Overriding the abstract method
    weekly_healthcare_contribution = (healthRate / 100) * calc_sal;
    return weekly_healthcare_contribution;
}

float  NonProfessional::weeklySalary() { //Overriding the abstract method
    weekly_salary = hourlyRate * hours_worked_in_a_week;
    return weekly_salary;
}
float  NonProfessional::weeklyVacation() { //Overriding the abstract method    
    weekly_vacation = (numOfVacs * hours_worked_in_a_week) / 24; //Calculating vacation in that week (twice of worked hour)
    return weekly_vacation;
}
float  NonProfessional::weeklyHealthcareContributions(float calc_sal) { //Overriding the abstract method
    weekly_healthcare_contribution = (healthRate / 100) * calc_sal;
    return weekly_healthcare_contribution;
}
