/*1. Write a
 * program that prompts the user for his/her name,
 * then asks the user for a number of times to print the name.
 * Your program should use a while-loop.
 * The output should print the occurrence number followed by the phrase.
 * A tab should be output between the occurrence number and name (i.e. use '\t')The execution of your program should something look like the following:Enter your name:
 * MaxEnter the number of times to print the phrase: 31    Max2    Max3    Max
 */

#include <iostream>
using namespace std;

int main() {
	string name;
	int num = 1;
	int numoftimes;


	cout << "Enter your name: " << endl;
	cin >> name;
	cout << "Enter the number of times to print the phrase: " << endl;
	cin >> numoftimes;
	while(num <= numoftimes){
		cout << num << "\t" << name << endl;
		num++;
	}

	return 0;
}
