/*
 * 2. Write a program which reads one or more integers from the console
 *  (until EOF is encountered), then outputs the range
 *   (the difference between the largest and smallest one)
 *   to the console. Remember that integers can be positive or negative.
 *   Hints: Two possible ways to handle largest and smallest:
 *    i. Initially set largest to a tiny value and smallest to a real big value
 *   . First comparisons will give a new value.   OR (most general)
 *   ii. First set BOTH the smallest and largest to the first interactive entry.
 *   Have logic to treat the first input value differently than all the others.
 *   3. Write a program
 * that prompts the user for an integer and then prints out all prime
 */

#include <iostream>
#include <climits>
using namespace std;

int main() {
	int  num;
	int  largest = INT_MIN;
	int  smallest = INT_MAX;

	cout << "Enter 1 or more integer" << endl;

	while(!cin.eof()){

		cin >> num;

		if (num > largest){
			largest = num ;
		}
		if (num < smallest){
			smallest = num;
		}

	}
		cout << "Largest num : " << largest << endl;
		cout << "smallest num : " << smallest << endl;
		cout << "range: " << largest-smallest << endl;



	return 0;
}
