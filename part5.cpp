//Compile and run the following program twice: 
//first with inputs of 4.5 and 1.5 
//second with inputs of 0 and 3.1 
// 
//Make observations when running the program with the above inputs.
#include <iostream> 
using namespace std;
int main() {
	double d1, d2; 
	cout << "Enter first number: "; 
	cin >> d1; 
	cout << "Enter second number: "; 
	cin >> d2;

	cout << d1 << " / " << d2 << " = " << d1 /d2 << endl; 
	cout << d2 << " / " << d1 << " = " << d2 /d1 << endl;
	int i1; 
	int i2; 
	i1 = d1; //truncation of fractional part will occur 
	i2 = d2; 
	cout << i1 << " / " << i2 << " = " << i1 /i2 << endl; 
	cout << i2 << " / " << i1 << " = " << i2 /i1 << endl;
}
