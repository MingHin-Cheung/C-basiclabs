//Stirling's approximation for factorials. 
#include <iostream> 
#include <cmath>
using namespace std;

int main(){
	double nFactorial,n;
	double pi= 3.14159;
	cout << "Enter a number: ";
	cin >> n;
	nFactorial=sqrt(2*pi*n)*pow(n/exp(1) ,n);
	cout << "The factorial of n is approximately " << nFactorial << endl;
}
