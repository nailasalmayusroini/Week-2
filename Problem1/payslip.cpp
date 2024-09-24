#include <iostream>
using namespace std;

int main() {

cout << "INPUT DATA" << endl;

// Enter the employee's name
string name;
cout << "Name: ";
getline (cin, name); // it catches the employee's full name with spaces

// Calculate the gross salary by prompting the base salary and percentage
int basesalary;
cout << "Base Salary: Rp";
cin >> basesalary;

int percentage;
cout << "Percentage (%) to calculate Gross Salary: ";
cin >> percentage;

//Calculate the Gross Salary
int grossSalary = basesalary * (percentage / 100.0);


// Prompt user to input the amount of installment
int installment;
cout << "Installment: Rp";
cin >> installment;

//Promt user to input the amount of insurance
int insurance;
cout << "Insurance: Rp";
cin >> insurance;

// Calculate the tax and net salary
int tax = grossSalary * 0.2 ;
cout << "Tax (20%): Rp" << tax;

int netsalary = grossSalary - tax - installment - insurance;
cout << "\nNet Salary: Rp" << netsalary;

// Payslip display
cout << " " << endl;
cout << "\nPayslip for Employee" << endl;
cout << "--------------------" << endl;
cout << "Name: " << name << endl;
cout << "Gross Salary: Rp" << grossSalary << ",00" << endl;
cout << "Tax (20%): Rp" << tax << ",00" << endl;
cout << "Installment: Rp" << installment << ",00" << endl;
cout << "Insurance: Rp" << insurance << ",00" << endl;
cout << "Net Salary: Rp" << netsalary << ",00" << endl;

return 0;
}