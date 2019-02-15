//============================================================================
// 2. Write a program to compute weekly wages.
//Prompt the user for his/her hourly rate
//and for the number of hours worked during the week.
//For any hours in excess of 40, the person is paid
//at 1.5 times the hourly rate.

#include <iostream>
using namespace std;

int main() {
	double wage, hourlywage, hours;
	cout << "Type in your hourly wage" << endl;
	cin >> hourlywage;
	cout << "Type in the number of hours worked during the week" << endl;
	cin >> hours;


	if (hours>40){
		int excesshours = hours-40;
		double excesshourswage = excesshours * (hourlywage * 1.5);
		wage = excesshourswage + 40 * hourlywage;
	}
	else
		wage= hourlywage * hours;


	cout << wage << endl;
	return 0;
}
