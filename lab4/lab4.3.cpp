/*============================================================================
/3. Write a program that prompts the user for an integer and then prints
 *  out all prime numbers up to that integer.For example,
 *  when the user enters 20, the program should print: 2 3 5 7 11 13 17 19
 *  Recall that a number is a prime number if it is not divisible
 *  by any number except 1 and itself.Hint: You will need nested loops
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int num;
	cout << "Enter an integer: " << endl;
	cin >> num;
	for (int i=1;i<num;i++)
		for (int j=2; j*j<=i; j++){
			if (i % j == 0)
				break;
			else if (j+1 > sqrt(i)) {
				cout << i << endl;

		    }

	}
}
