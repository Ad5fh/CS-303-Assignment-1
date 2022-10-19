#pragma once
class Employee {  //Abstract class
public:
    float weeklySalary(); //Abstract function
    float weeklyVacation(); //Abstract function
    float weeklyHealthcareContributions(float calc_sal); //Abstract function
    float weekly_salary, weekly_vacation, weekly_healthcare_contribution;
};

class Professional :public Employee { //Professional Class Inheriting Abstract class
public:
    float monthlysalary, monthlyvacation;
    float healthRate;//Percentage of salary put into Health
    float weeklySalary();
    float weeklyVacation();
    float weeklyHealthcareContributions(float calc_sal);
};
class NonProfessional :public Employee { //Non Professional Class Inheriting Abstract class
public:
    float hours_worked_in_a_week;
    float hourlyRate;//Salary per hour
    int numOfVacs;//Number of hours used for vacation
    float healthRate;//Percentage of salary put into Health
    float weeklySalary();
    float weeklyVacation();
    float weeklyHealthcareContributions(float calc_sal);
};
