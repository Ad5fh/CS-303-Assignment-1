#include <iostream>
#include "file.h"
using namespace std;


int main() {
    float MonthlySal, MonthlyVac, WeekWork, HourlyRate;
    Professional* prof1;
    prof1 = new Professional(); //Making object of Professional Class
    NonProfessional* nonprof2;
    nonprof2 = new NonProfessional(); //Making object of Non Professional Class
    cout << "\n\t\t\t\t\tProfessional Employee" << endl;
    //User input monthly salary of Professional Employee
    cout << "Enter the monthly salary of Professional Employee: " << endl;
    cin >> MonthlySal;
    prof1->monthlysalary = MonthlySal;
    //User input monthly vacation of Professional Employee
    cout << "Enter the monthly vacation of Professional Employee in days: ";
    cin >> MonthlyVac;
    prof1->monthlyvacation = MonthlyVac;
    float sal1;
    sal1 = prof1->weeklySalary();
    cout << "\nWeekly salary of Professional Employee: " << sal1 << endl;
    float vac1;
    vac1 = prof1->weeklyVacation();
    cout << "\nWeekly Vacation of Professional Employee: " << vac1 << " days" << endl;

    float health1, Rate1;
    cout << "How many percent rate of the salary was put into Healthcare?  ";
    cin >> Rate1;
    prof1->healthRate = Rate1;
    health1 = prof1->weeklyHealthcareContributions(sal1);
    cout << "\nWeekly Healthcare Contributions of Professional Employee: " << health1 << endl;
    cout << "--------------------------------------------------------------" << endl;
    cout << "\n\t\t\t\t\tNon Professional Employee" << endl;
    //User input hours worked in that week by Non Professional Employee
    cout << "\nEnter the hours worked by Non Professional Employee in a week: ";
    cin >> WeekWork;
    cout << "\nEnter the hourly rate for a Non Professional Employee in that week: ";
    cin >> HourlyRate;
    nonprof2->hours_worked_in_a_week = WeekWork;
    nonprof2->hourlyRate = HourlyRate;
    float sal2;
    sal2 = nonprof2->weeklySalary();
    cout << "\nWeekly salary of Non Professional Employee: " << sal2 << endl;
    float vac2;
    int numVacs;
    cout << "\nHow many hours of work a week were taken for holidays?  ";
    cin >> numVacs;
    nonprof2->numOfVacs = numVacs;
    vac2 = nonprof2->weeklyVacation();
    cout << "\nWeekly Vacation of Non Professional Employee: " << vac2 << " days" << endl;
    float health2, Rate;
    cout << "How many percent rate of the salary were put into Healthcare?  ";
    cin >> Rate;
    nonprof2->healthRate = Rate;
    health2 = nonprof2->weeklyHealthcareContributions(sal2);
    cout << "\nWeekly Healthcare Contributions of Non Professional Employee: " << health2 << endl;

    return 0;
}