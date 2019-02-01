//Stirling's approximation for factorials. 
#include <iostream> 
#include <cmath>
using namespace std;

int main(){
	double nFactorial,n;
	double pi= 3.14159;
	double e = 2.71828;
	cout << "Enter a number: ";
	cin >> n;
	nFactorial=sqrt(2*pi*n)*pow(n/e ,n);
	cout << "The factorial of n is approximately " << nFactorial << endl;
}
