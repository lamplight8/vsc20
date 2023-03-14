import <iostream>;
import <format>;
import employee;

using namespace std;

int main()
{
	// create and populate an employee
	Employee anEmployee;
	anEmployee.firstInitial = 'J';
	anEmployee.lastInitial = 'D';
	anEmployee.employeeNumber = 42;
	anEmployee.salary = 80000;

	// output the values of an employee
	cout << format("Employee: {}{}\n", anEmployee.firstInitial, 
		anEmployee.lastInitial);
	cout << format("Number: {}\n", anEmployee.employeeNumber);
	cout << format("Salary: ${}\n", anEmployee.salary);
}
