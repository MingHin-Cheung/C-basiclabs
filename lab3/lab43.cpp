/*
3. Write a game program that generates a random number between 1 and 100.
Your program should ask the user to guess the number.
Respond to the user with either "too high", "too low", or "got it".
If the user guesses correctly the number, print out the number of guesses used.
The program should stop upon either a correct guess or after the 10th attempt.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	int num, guess, tries = 0;
	srand(time(0));
	num = rand() % 100 + 1;
	cout << "guess the number ;";
	cin >> guess;
	while ( num!= guess){
		if (tries == 10){
			cout<< " Wrong !! " << endl;
			break;
		}
		if( guess> num){
			cout<< "too high" << endl;
			tries++;
			cout << "guess the number ;";
			cin >> guess;
		}
		else if( guess< num){
			cout << "too low" << endl;
		    tries++;
		    cout << "guess the number ;";
		    cin >> guess;
		}
	}
	if ( num== guess)
	cout << "You get it!" << endl;
}

